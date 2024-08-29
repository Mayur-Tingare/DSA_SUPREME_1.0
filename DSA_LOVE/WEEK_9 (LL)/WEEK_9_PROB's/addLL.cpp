#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        this->data=0;
        this->next=NULL;

    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        cout<<endl;
        cout<<"Deleted node at "<<this->data<<endl;
    }
};

void print(Node *head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// insert at right of head

void insertattail(Node*& head,Node *&tail,int data){

    if(tail==NULL){
        Node *newnode=new Node(data);
        head=newnode;
        tail=newnode;
        
    }

    // create
    else{

    Node *newnode= new Node(data);
    
    // if head /tail is empty

    
    //point

    tail->next=newnode;
    

    // update

    tail=newnode;
    }

}


// insert at left of head

void insertathead(Node *& head,Node *&tail,int data){


    if(head==NULL){
        Node *newnode=new Node(data);
        head=newnode;
        tail=newnode;
        
    }
    else{
    // create new node
    Node* newnode=new Node(data);

    // next ko attach kro
    newnode->next=head;

    

    // pointer head update
    head=newnode;
    }



}
int findlen(Node*& head, Node*& tail){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        
        temp=temp->next;
        len++;
    }
    return len;
}

void insertatpos(Node* &head, Node *& tail,int position,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }

    if(position==0){
        insertathead(head,tail,data);
        return;
    }

    int len=findlen(head,tail);
    if(position>=len){
        insertattail(head,tail,data);
        return;

    }

    

    
   


    int i=1;
    Node*prev=head;
    while(i<position){
        prev=prev->next;
        i++;
        
    }

    Node*curr=prev->next;
    Node *newnode=new Node(data);

  

    newnode->next=curr;
    prev->next=newnode;
    



}

void deletenode(int position,Node*& head,Node*& tail){
    if(head==NULL){
        cout<<"LL is empty deletion can't be processed "<<endl;
        return;
    }
    
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
        
    }
    int len=findlen(head,tail);
    if(position==len){
        int i=1;
        Node *prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        prev->next=NULL;
        Node*temp=tail;
        tail=prev;

        delete temp;
        return;

    }

    // middle node

    int i=1;
    Node *prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node *curr=prev->next;

    prev->next=curr->next;
    curr->next==NULL;

    delete curr;
    


}
Node *reverse(Node*& previous,Node *& curr){
    if(curr==NULL){
        return previous;
    }

    Node* forward=curr->next;
    curr->next=previous;

    return reverse(curr,forward);

    


}


Node *solve(Node *&head1,Node *&head2){

    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    Node *anshead=NULL;
    Node *anstail=NULL;
    Node*prev=NULL;

    head1=reverse(prev,head1);
    head2=reverse(prev,head2);

    int carry=0;

    while(head1!=NULL && head2!=NULL){
        int sum=head1->data+head2->data+carry;
        int digit=sum%10;
        carry=sum/10;
        Node *newnode=new Node(digit);
        if(anshead==NULL){
            anshead=newnode;
            anstail=newnode;
        }
        else{
            anstail->next=newnode;
            anstail=newnode;
        }
        head1=head1->next;
        head2=head2->next;



    }

    while(head1!=NULL){
        int sum=carry+head1->data;

        int digit=sum%10;
        carry=sum/10;

        Node *newnode=new Node(digit);
        anstail->next=newnode;
        anstail=newnode;
        head1=head1->next;
    }
    while(head2!=NULL){
        int sum=carry+head2->data;

        int digit=sum%10;
        carry=sum/10;

        Node *newnode=new Node(digit);
        anstail->next=newnode;
        anstail=newnode;
        head2=head2->next;
    }

    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        Node *newnode=new Node(digit);
        anstail->next=newnode;
        anstail=newnode;

    }

    Node *ans=reverse(prev,anshead);
    return ans;
}




int main()
{
    Node *head1=new Node(9);
    Node *second1=new Node(9);
    Node *head2=new Node(9);
    Node *second2=new Node(9);
    // Node *third2=new Node(4);

    head1->next=second1;
    head2->next=second2;
    // second2->next=third2;

    
    Node* ans=solve(head1,head2);

    print(ans);

    



    







    return 0;
}