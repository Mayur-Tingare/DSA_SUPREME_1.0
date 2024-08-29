#include <bits/stdc++.h>
using namespace std;

int solve(int x,int y,int z,int target){
    if(target==0){
        return 0;

    }
    if(target<0){
        return INT_MIN;
    }
    

    int ans1=solve(x,y,z,target-x)+1;
    int ans2=solve(x,y,z,target-y)+1;
    int ans3=solve(x,y,z,target-z)+1;
    
    int ans=max(ans1,max(ans2,ans3));

    
    return ans;
    
}

int main()
{
    
    int target=7;
    int x=5;
    int y=2;
    int z=2;

    int ans=solve(x,y,z,target);
    if(ans<0){
        ans=0;
    }
    cout<<ans<<endl;


    return 0;
}