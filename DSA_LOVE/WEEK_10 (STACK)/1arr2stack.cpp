#include <iostream>
using namespace std;

class stack{
    public:

    int top1;
    int *arr;
    int size;
    int top2;

    stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    void push1(int data){
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=data;
            
            
        }

    }

    void push2(int data){
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
            
        }
        else{
            top2--;
            arr[top2]=data;
            
        }

    }

    void pop1(){
        if(top1==-1){
            cout<<"Underflow"<<endl;
        }
        else{
            arr[top1]=0;
            top1--;
        }

    }
    void pop2(){
        if(top2==size){
            cout<<"Underflow"<<endl;
        }
        else{
            arr[top2]=0;
            top2++;

        }

    }


    void print(){

        cout<<"Top 1 :"<<top1<<endl;
        cout<<"Top 2 :"<<top2<<endl;

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;

    }

};

int main()
{
    stack s(6);
    s.push1(10);
    s.push1(20);
    s.push1(30);

    s.push2(10);
    s.push2(20);
    s.push2(30);

    s.print();
    s.pop1();
    s.print();

    s.pop2();
    s.print();
    s.pop1();
    s.pop1();
    s.print();

    s.pop1();
    s.print();


    
    return 0;
}