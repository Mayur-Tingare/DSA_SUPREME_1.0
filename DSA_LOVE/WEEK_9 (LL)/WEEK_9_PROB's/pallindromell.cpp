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

void print(Node *& head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *reverse(Node * head){
    

    Node*prev=NULL;
    Node*curr=head;
    Node*forward=curr->next;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        
    }

    return prev;

}

bool checkpallindrome(Node*& head){
    if(head==NULL){
        return true;
    }
    if(head->next==NULL){
        return true;
    }

    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        }

    }

    Node *reversekahead=reverse(slow->next);

    slow->next=reversekahead;

    Node*temp1=head;
    Node*temp2=reversekahead;

    while(temp2!=NULL){
        if(temp1->data != temp2->data){
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;



}


int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(30);
    Node* fifth=new Node(20);
    Node* sixth=new Node(10);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    

   Node *head=first;

    bool ans=checkpallindrome(head);

    if(ans==1){
        cout<<"LL is Pallindrome."<<endl;

    }
    else{
        cout<<"LL is not a pallindrome."<<endl;
    }

    




    return 0;
}