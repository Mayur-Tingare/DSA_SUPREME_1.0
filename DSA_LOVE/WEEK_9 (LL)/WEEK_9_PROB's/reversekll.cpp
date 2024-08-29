#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int getlength(Node *&head) {
    int len=0;
    Node *temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}


Node *getmiddle(Node * head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }

    if(head->next==NULL){
        return head;
    }

    Node* slow=head;
    Node* fast=head->next;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        
    }
    return slow;


}

Node *reverseknodes(Node *head,int k){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    int len=getlength(head);
    if(k>len){
        // cout<<"enter valid number of k"<<endl;
        return head;
    }

    Node* previos=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    int count=0;

    while(count<k){
        forward=curr->next;
        curr->next=previos;
        previos=curr;
        curr=forward;
        count++; 

    }

    if(forward!=NULL){
        head->next=reverseknodes(forward,k);
    }

// return head of new list

    return previos;




}





void print(Node *& head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;

   Node *head=first;

    print(head);
    cout<<endl<<endl;


    // cout<<"Middle Node is "<<getmiddle(head)->data<<endl;

    head=reverseknodes(head,4);
    print(head);




    return 0;
}