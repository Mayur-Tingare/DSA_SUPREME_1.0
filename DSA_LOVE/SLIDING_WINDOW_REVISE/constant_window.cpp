#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={-1,2,3,3,4,5,-1};

    int k=4;

    int sum=0;

    for(int i=0;i<4;i++){
        sum+=arr[i];
    }

    int l=0;
    int r=k;
    int maxi=sum;

    while(r<arr.size()){
        sum-=arr[l];
        l++;
        sum+=arr[r];
        r++;
        maxi=max(maxi,sum);
    }

    cout<<maxi;
    return 0;
}