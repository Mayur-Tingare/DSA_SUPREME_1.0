#include <bits/stdc++.h>
using namespace std;

int bs(vector<int>arr,int start,int end,int x){
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==x){
            return mid;
        }
        else if(x>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}

int exp(vector<int> arr,int n,int x){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=x){
        i=i*2;
    }

    int ans=bs(arr,i/2,min(i,n-1),x);
    return ans;
}

int main(){
    vector<int> arr{3,4,5,6,11,13,14,15,56,70};
    int x=13;
    int n=arr.size();
    int ans=exp(arr,n,x);
    cout<<ans<<endl;
    
}