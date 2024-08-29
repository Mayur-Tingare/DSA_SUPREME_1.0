#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,1,1,0,1,0,1,1,1,1,0};
    int k=2;

    int maxlen=0,len=0,l=0,r=0,zeros=0;

    while(r<arr.size()){
        if(arr[r]==0){
            zeros++;
        }
        if(zeros>k){
            if(arr[l]==0){
                zeros--;
            }
            l++;
        }
        if(zeros<=k){
            len=r-l+1;
            maxlen=max(maxlen,len);

        }
        r++;

    }

    cout<<maxlen<<endl;

    return 0;
}