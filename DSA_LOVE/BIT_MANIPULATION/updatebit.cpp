#include <bits/stdc++.h>
using namespace std;


int clearbitsith(int n,int i){
    int mask=~(1<<i);

    int ans=n&mask;

    return ans;

}

int setbitsith(int n,int i){
    int mask=1<<i;

    int ans=n|mask;

    return ans;
}

int main(){

    int n=4;

    int i=2;

    int mask=1<<i;
    int ans;
    int ans1=mask&n;

    if(ans1){
        ans=clearbitsith(n,i);
    }
    else{
        ans=setbitsith(n,i);
    }

    cout<<ans<<endl;

    return 0;
}