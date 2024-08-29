#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n=15;

    int count=0;

    // while(n){
    //     if(n&1){
    //         count++;
    //     }
    //     n=n>>1;

    // }
    // cout<<count;


    ////  Pyari Approach

    while(n!=0){
        n=(n&(n-1));
        count++;
    }

    cout<<count;

    return 0;
}