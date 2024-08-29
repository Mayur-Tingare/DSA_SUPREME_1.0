#include <bits/stdc++.h>
using namespace std;

class Queue{

    public:

    int front;
    int rear;
    int size;
    int *arr;

    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

    void push(int data){
        if(rear==size){
            cout<<"Queue is full "<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    void pop(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;

        }
        else{
            arr[front]=-1;
            front++;

            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }

    int getfront(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }

    bool isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    int getsize(){
        return rear-front;
    }

};

int main()
{
 
    Queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    if(q.isempty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;

    }

    q.pop();

    if(q.isempty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;

    }

    cout<<q.getfront()<<endl;

    cout<<q.getsize()<<endl;




    
    return 0;
}