#include<bits/stdc++.h>
using namespace std;

void solve(int *& q){
    q=q+1;
}

int main(){
    int a=5;
    int*p=&a;

    cout<<sizeof(p)<<endl;
    cout<<"Before : "<<p<<endl;
    solve(p);
    cout<<"After : "<<p<<endl;
    

}