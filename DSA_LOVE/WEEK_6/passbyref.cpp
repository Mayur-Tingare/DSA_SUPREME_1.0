#include<bits/stdc++.h>
using namespace std;

void solve(int a){
    a++;
}

void refsolve(int &val){
    val++;
}

int main(){
    int a=5;
    
    solve(a);
    cout<<a<<endl;        // This one is pass by value;

    refsolve(a);
    cout<<a<<endl;       // This one is pass by reference;
}