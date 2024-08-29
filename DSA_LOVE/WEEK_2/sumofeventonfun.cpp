#include<bits/stdc++.h>
using namespace std;

int getsum(int n){
    int sum=0;
    for(int i=2;i<=n;i++){
        if(i%2==0){    // avoid modulo cause it has heavy processing         
        sum=sum+i;
        }
    }
    return sum;
}


int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<endl;
    int even_sum=getsum(n);
    cout<<even_sum<<endl;


    
}