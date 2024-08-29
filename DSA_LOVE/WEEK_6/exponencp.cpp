#include<bits/stdc++.h>
using namespace std;

int fastexpo(int a,int b){
    int ans=1;

    while(b>0){
        if(b&1){
            // i.e b is odd
            ans=ans*a;
        }
        a=a*a;
        b=b/2;

    }
    return ans;  
}

int slowexpo(int a,int b){
    int ans=1;

    
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){


    cout<<slowexpo(5,4)<<endl;
    cout<<endl;
    cout<<fastexpo(2,10)<<endl;
}