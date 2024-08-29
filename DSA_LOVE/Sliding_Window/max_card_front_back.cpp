#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>arr{6,2,3,4,7,2,1,7,1};
    int k=4;



    int l=0;
    int r=k-1; 
    int outersum=0;

    for(int i=0;i<=r;i++){
        outersum = outersum+arr[i];
    }

    int rightindex=arr.size()-1;
    int lsum=outersum;
    int rsum=0;
    int finalans=0;


    for(int i=r;i>=0;i--){
        lsum=lsum-arr[i];
        rsum+=arr[rightindex];
        rightindex--;

        finalans=max(finalans,lsum+rsum);
    }
    // finalans=max(finalans,outersum);

    cout<<finalans<<endl;
    
  

    
    return 0;
}