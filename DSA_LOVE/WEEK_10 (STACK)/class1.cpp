#include <iostream>
using namespace std;


class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }


    void push(int data){

        if(size-top>1){
            // available;

            top++;
            arr[top]=data;
        }
        else{
            // space not available

            cout<<"Stack Overflow"<<endl;

        }

    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow can't delete element";
        }
        else{
            top--;

        }


    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }

    int gettop(){

        if(top==-1){
            cout<<"Stack underflow there is no top element"<<endl;
        }
        else{
            return arr[top];
        }

    }

    int getsize(){
          return top+1;

    }





};


int main()
{

    // stack<int>st;

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);


    // // remove

    // st.pop();
    // cout<<"Elements on top is :"<<st.top()<<endl;

    // cout<<"Size of stack is :"<<st.size()<<endl;

    // if(st.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }
    // else{
    //     cout<<"Stack is not empty"<<endl;

    // }

    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }

    // if(st.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }
    // else{
    //     cout<<"Stack is not empty"<<endl;

    // } 

    stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isempty()){
        cout<<s.gettop()<<endl;
        cout<<"Size of stack is :"<<s.getsize()<<endl;
        s.pop();
    }
    cout<<endl;

    cout<<"Size of stack at the end is:"<<s.getsize()<<endl;

    



    return 0;
}