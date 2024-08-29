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

// void sortzot(Node *head){
//     Node* temp=head;
//     int zero=0;
//     int one=0;
//     int two=0;

//     while(temp!=NULL){
//         if(temp->data==0){
//             zero++;

//         }
//         else if(temp->data==1){
//             one++;
//         }
//         else if(temp->data==2){
//             two++;
//         }
//         temp=temp->next;
//     }

//     temp=head;
//     while(zero--){
//         temp->data=0;
//         temp=temp->next;
//     }
//     while(one--){
//         temp->data=1;
//         temp=temp->next;
//     }
//     while(two--){
//         temp->data=2;
//         temp=temp->next;
//     }
// }

Node *sortzot(Node *& head){
    Node *zerohead=new Node(-1);
    Node *zerotail=zerohead;
    
    Node *onehead=new Node(-1);
    Node *onetail=onehead;

    Node *twohead=new Node(-1);
    Node *twotail=twohead;

    Node *curr=head;
    while(curr!=NULL){
        

        if(curr->data==0){
            Node*temp=curr;
        curr=curr->next;
        // temp->next=NULL;
            zerotail->next=temp;
            zerotail=temp;
        }
        else if(curr->data==1){
            Node*temp=curr;
        curr=curr->next;
        // temp->next=NULL;
            onetail->next=temp;
            onetail=temp;
        }
        else if(curr->data==2){
            Node*temp=curr;
        curr=curr->next;
        // temp->next=NULL;
            twotail->next=temp;
            twotail=temp;
        }

    }
    onetail->next=NULL;
    zerotail->next=NULL;
    twotail->next=NULL;
    

    

    Node *temp2=onehead;
    onehead=onehead->next;
    temp2->next=NULL;
    delete temp2;

    Node *temp3=twohead;
    twohead=twohead->next;
    temp3->next=NULL;
    delete temp3;


    if(onehead!=NULL){
        zerotail->next=onehead;
        
        if(twohead!=NULL){
            onetail->next=twohead;
        }
    }
    else{
        zerotail->next=twohead;
    }
    Node *temp1=zerohead;
    zerohead=zerohead->next;
    temp1->next=NULL;
    delete temp1;

    return zerohead;


}




int main()
{
    Node *first=new Node(2);
    Node *second=new Node(2);
    Node *third=new Node(2);
    Node *fourth=new Node(1);
    Node *fifth=new Node(0);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    Node *head=first;


    // sahi tarika;

    // Node *head =NULL;
    // Node *tail=NULL;                   // NULL ke andar nahi kr skte
    // insertathead(head,tail,90);
    // insertathead(head,tail,80);
    // insertathead(head,tail,70);
    // insertathead(head,tail,60);



    // print(head);


    // insertattail(head,tail,10);
    // insertattail(head,tail,20);
    // insertattail(head,tail,30);
    // insertattail(head,tail,40);

    // print(head);

    // insertatpos(head,tail,8,77);
    print(head);
    cout<<endl<<endl;
    // deletenode(9,head,tail);
    // cout<<endl;

    // print(head);

    // deletenode(3,head,tail);
    // print(head);
    
    // Node *previous=NULL;
    // Node *curr=head;
    // head=reverse(previous,curr);
    // cout<<endl;
    // print(head);


    // cout<<endl;


    // head=reversebyloop(head);
    // print(head);

    Node*newhead=sortzot(head);
    
    print(newhead);







    return 0;
}