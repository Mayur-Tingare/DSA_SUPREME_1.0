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

// void insertathead(Node *& head,Node *&tail,int data){


//     if(head==NULL){
//         Node *newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
        
//     }
//     else{
//     // create new node
//     Node* newnode=new Node(data);

//     // next ko attach kro
//     newnode->next=head;

    

//     // pointer head update
//     head=newnode;
//     }



// }
// int findlen(Node*& head, Node*& tail){
//     int len=0;
//     Node* temp=head;

//     while(temp!=NULL){
        
//         temp=temp->next;
//         len++;
//     }
//     return len;
// }

// void insertatpos(Node* &head, Node *& tail,int position,int data){
//     if(head==NULL){
//         Node* newnode=new Node(data);
//         head=newnode;
//         tail=newnode;
//         return;
//     }

//     if(position==0){
//         insertathead(head,tail,data);
//         return;
//     }

//     int len=findlen(head,tail);
//     if(position>=len){
//         insertattail(head,tail,data);
//         return;

//     }

    

    
   


//     int i=1;
//     Node*prev=head;
//     while(i<position){
//         prev=prev->next;
//         i++;
        
//     }

//     Node*curr=prev->next;
//     Node *newnode=new Node(data);

  

//     newnode->next=curr;
//     prev->next=newnode;
    



// }

// void deletenode(int position,Node*& head,Node*& tail){
//     if(head==NULL){
//         cout<<"LL is empty deletion can't be processed "<<endl;
//         return;
//     }
    
//     if(position==1){
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//         return;
        
//     }
//     int len=findlen(head,tail);
//     if(position==len){
//         int i=1;
//         Node *prev=head;
//         while(i<position-1){
//             prev=prev->next;
//             i++;
//         }
//         prev->next=NULL;
//         Node*temp=tail;
//         tail=prev;

//         delete temp;
//         return;

//     }

//     // middle node

//     int i=1;
//     Node *prev=head;
//     while(i<position-1){
//         prev=prev->next;
//         i++;
//     }
//     Node *curr=prev->next;

//     prev->next=curr->next;
//     curr->next==NULL;

//     delete curr;
    


// }

// Node *reverse(Node*& previous,Node *& curr){
//     if(curr==NULL){
//         return previous;
//     }

//     Node* forward=curr->next;
//     curr->next=previous;

//     return reverse(curr,forward);

    


// }

// Node *reversebyloop(Node *&head){
//     Node *prev=NULL;
//     Node*curr=head;
//     while(curr!=NULL){
//         Node *temp=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=temp;

//     }
//     return prev;
// }



bool checkloop(Node *head){
    if(head==NULL){
        return false;
    }
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            return true;
        }

    }
    return false;

}

Node * startingpoint(Node *& head){
    
    if(head==NULL){
        return NULL;
    }
    if(checkloop(head)==1){

    Node*slow=head;
    Node*fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            break;
        }
    }

    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
    }
    return NULL;
}

Node *removeloop(Node *& head){
    
    if(head==NULL){
        return NULL;
    }
    if(checkloop(head)==1){

    Node*slow=head;
    Node*fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            slow=head;
            break;
        }
    }

    Node* previous=fast;
    while(slow!=fast){
        previous=fast;
        slow=slow->next;
        fast=fast->next;
    }
    previous->next=NULL;
    return slow;
    }
    return NULL;
}

int main()
{
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);
    Node *fifth=new Node(50);
    Node *sixth=new Node(60);
    Node *seventh=new Node(70);
    Node *eighth=new Node(80);
    Node *nineth=new Node(90);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=nineth;
    nineth->next=fifth;

    Node* head=first;

    // print(head);

    cout<<"Loop check is : "<<checkloop(head)<<endl;
    cout<<"Starting is at :" <<startingpoint(head)->data<<endl;
    removeloop(head);
    cout<<"Loop check is : "<<checkloop(head)<<endl;
    print(head);




    // sahi tarika;

    // Node *head =NULL;
    // Node *tail=NULL;                   // NULL ke andar nahi kr skte
    // insertathead(head,tail,90);
    // insertathead(head,tail,80);
    // insertathead(head,tail,70);
    // insertathead(head,tail,60);



    // // print(head);


    // insertattail(head,tail,10);
    // insertattail(head,tail,20);
    // insertattail(head,tail,30);
    // insertattail(head,tail,40);

    // // print(head);

    // insertatpos(head,tail,8,77);
    // print(head);
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







    return 0;
}