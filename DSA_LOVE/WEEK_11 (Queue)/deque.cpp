#include <bits/stdc++.h>
using namespace std;

class Deque{

    public: 
    int size;
    int front;
    int rear;
    int *arr;

    Deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push_rear(int data){
        if(front==0 && rear==size-1){
            cout<<"Queue is Full cant insert"<<endl;
        }
        else if(front==-1 &&rear==-1){
            front=rear=0;
            arr[rear]=data;

        }

        else if(front!=0 && rear==size-1){
            rear=0;
            arr[rear]=data;

        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    void push_front(int data){
        if(front==0 && rear==size-1){
            cout<<"Queue is Full cant insert"<<endl;
        }
        else if(front==-1 &&rear==-1){
            front=rear=0;
            arr[front]=data;

        }

        else if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=data;

        }
        else{
            front--;
            arr[front]=data;
        }
    }
    

    void pop_front(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear){

            front=-1;
            rear=-1;

        }
        else if(front==size-1){
            arr[front]=-1;
            front=0;

        }
        else{
            arr[front]=-1;
            front++;
        }
    }

    void pop_rear(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear){

            front=-1;
            rear=-1;

        }
        else if(rear=0){
            arr[rear]=-1;
            rear=size-1;

        }
        else{
            arr[rear]=-1;
            rear--;
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }

};

int main()
{
    Deque dq(6);

    dq.print();
    cout<<endl<<endl;
    dq.push_front(10);
    dq.print();
    dq.push_rear(30);
    dq.push_front(20);
    dq.push_rear(40);
     dq.push_rear(50);
      dq.push_rear(60);

    cout<<endl<<endl;
    dq.print();



    return 0;
}