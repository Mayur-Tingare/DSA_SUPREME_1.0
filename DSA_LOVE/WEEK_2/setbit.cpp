#include<bits/stdc++.h>
using namespace std;
int main(){

    int n=3;
    int ans=0;
    while(n!=0){
        if(n &1){
            // found 1 set bit
            ans++;

        }
        // Right shift

        n=n>>1;
    }
    cout<<"Number of set bits are : "<<ans<<endl;


}