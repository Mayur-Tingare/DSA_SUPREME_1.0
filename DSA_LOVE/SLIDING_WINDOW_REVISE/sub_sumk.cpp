#include <bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>arr{2,5,1,10,10};
     int k=14;

     int l=0;
      int r=0;
      int sum=0;
      int maxlen=INT_MIN;

      while(r<arr.size()){
        sum+=arr[r];
        if(sum<=k){ 
            maxlen=max(maxlen,r-l+1);
        }
        else if(sum>k){
            sum-=arr[l];
            l++;
        }
        r++;
      }

      cout<<maxlen;



    return 0;
}