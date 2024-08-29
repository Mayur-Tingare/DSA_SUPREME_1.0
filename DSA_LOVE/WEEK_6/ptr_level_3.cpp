#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int **q=&p;

    cout<<a<<endl;           // 5
    cout<<&a<<endl;          // add of a
    cout<<p<<endl;           // add of a
    cout<<&p<<endl;          // add of p
    cout<<*p<<endl;          // 5 
    cout<<q<<endl;           // add of p
    cout<<&q<<endl;          // add of q
    cout<<*q<<endl;          // add of a
    cout<<**q<<endl;         // 5
}