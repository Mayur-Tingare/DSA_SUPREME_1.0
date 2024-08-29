#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node *prev;
    Node *next;

    Node(){
        this->data=0;
        this->next=NULL;
        this->prev==NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;

    }
    ~Node(){
        cout<<"Node with value: "<<this->data<<" deleted"<<endl;
    }
};

int findlength(Node *&head){
    int len=0;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void print(Node *head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

void insertathead( Node *& head, Node *& tail,int data){
    if(head==NULL){
        Node*newnode=new Node(data);
        head=newnode;
        tail=newnode;

    }
    else{
        Node * newnode=new Node(data);

        newnode->next=head;
        head->prev=newnode;

        head=newnode;
    }
}

void insertattail(Node*& head,Node*& tail,int data){
    if(head==NULL){
        Node *newnode= new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        Node *newnode=new Node(data);

        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}

void insertatpos(Node *&head,Node *& tail,int data,int position){
    if(head==NULL){
        Node *newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
        if(position==1){
            insertathead(head,tail,data);
            return;
        }
        int len=findlength(head);
        if(position>len){
            insertattail(head,tail,data);
            return;
        }

        int i=1;
        Node *previos=head;
        while(i<position-1){
            previos=previos->next;
            i++;
        }
        Node *curr=previos->next;

        Node *newnode=new Node(data);
        previos->next=newnode;
        newnode->prev=previos;
        curr->prev=newnode;
        newnode->next=curr;



    }
}

void deletenode(Node *&head, Node*& tail,int position){
    if(head==NULL){
        cout<<"LL is Empty cant process deleting"<<endl;

    }
    int len=findlength(head);
    if(position>len){
        cout<<"Enter valid position"<<endl;
    }


    if(position==1){
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }

    if(position==len){
        Node *temp=tail;

        tail=tail->prev;

        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;

    }

    // delete middle

    int i=1;
    Node *left=head;
    while(i < position-1){
        left=left->next;
        i++;
    }

    Node *curr=left->next;
    Node * right=curr->next;
    left->next=right;
    right->prev=left;

    curr->prev=NULL;
    curr->next=NULL;
    delete curr;
}




int main()
{
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);

    Node *head=first;
    Node *tail=third;

    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    

    // print(head);
    cout<<endl;

    

    insertathead(head,tail,101);
    // print(head);

    insertattail(head,tail,501);
    /* print(head); */ 

    insertatpos(head,tail,301,3);
    print(head);
    cout<<endl;

    deletenode(head,tail,3);
    print(head);

    return 0;
}