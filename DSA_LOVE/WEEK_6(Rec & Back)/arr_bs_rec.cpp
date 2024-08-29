#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>arr,int s,int e,int key){
    if(s>e) return -1;
    int mid=s+(e-s)/2;

    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]>key){
        return binarysearch(arr,s,mid-1,key);
    }
    else{
        return binarysearch(arr,mid+1,e,key);
    }
}

int main()
{
    vector<int>arr{10,20,30,40,50,60,70,80,90,99};
    int n=arr.size();
    int s=0;
    int e=n-1;
    int key=99;

    int ans=binarysearch(arr,s,e,key);
    cout<<"Element found at : "<<ans; 


    return 0;
}