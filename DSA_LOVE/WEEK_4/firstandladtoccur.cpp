#include <bits/stdc++.h>
using namespace std;

int firstoccur(vector<int>arr,int target){
    int i=0;
    int j=arr.size()-1;
    int ans;

    while(i<=j){
        int mid=(i+j)/2;

        if(arr[mid]>=target){
            ans=mid;
            j=mid-1;
          }
          else{
            i=mid+1;
          }
          

    }
    return ans;
}

int lastoccur(vector<int>arr,int target){
    int i=0;
    int j=arr.size()-1;
    int ans;

    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]<=target){
            ans=mid;
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr{1,2,2,2,2,2,2,2,2,3,4,5};
    int target=3;

    int first=firstoccur(arr,target);
    int last=lastoccur(arr,target);

    cout<<first<<" "<<last<<endl;

    return 0;
}