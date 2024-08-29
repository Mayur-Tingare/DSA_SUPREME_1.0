#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>arr{6,2,3,4,7,2,1,7,1};
    int k=4;



    int l=0;
    int r=l+k-1;
    int maxi=INT_MIN;
    int outersum=0;

    for(int i=0;i<=r;i++){
        outersum = outersum+arr[i];
    }
    int sum=outersum;
  

    while(r<arr.size()-1){
        
        sum-=arr[l];
        l++;r++;
        sum+=arr[r];
        maxi=max(maxi,sum);
    }
    
    maxi=max(maxi,outersum);

    cout<<maxi<<endl;
    
    return 0;
}