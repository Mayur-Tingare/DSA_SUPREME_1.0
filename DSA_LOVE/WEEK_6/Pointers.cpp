#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;


    cout<<"Value in a : "<<a<<endl;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"Values in ptr : "<<ptr<<endl;
    cout<<"value at which ptr is pointing : "<<*ptr<<endl;
    cout<<"Address of ptr : "<<&ptr<<endl;

    int z=2;
    char ch='a';
    double y=1.09;

    int *ptr1=&z;
    char *ptr2=&ch;
    double *ptr3=&y;

    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(ptr3)<<endl;
    

}