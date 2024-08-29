#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;

    int l=0;
    int r=0;
    int zeros=0;
    int len=0;
    int maxlen=INT_MIN;

    while(r<arr.size()){
        if(arr[r]==0){
            zeros++;
        }
        if(zeros<=k){
            len=r-l+1;
            maxlen=max(maxlen,len);
        }
        else{
            if(arr[l]==0){
                zeros--;
            }
            l++;
        }
        r++;

    }

    cout<<maxlen<<endl;



    return 0;
}