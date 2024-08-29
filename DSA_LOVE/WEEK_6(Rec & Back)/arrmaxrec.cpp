#include <bits/stdc++.h>
using namespace std;

void findmin(int arr[],int n,int i,int& mini){
    if(i>=n) return;

    if(arr[i]<mini){
        mini=arr[i];
    }
    findmin(arr,n,i+1,mini);
}

void findmax(int arr[],int n,int i,int& maxi){
    if(i>=n) return;

    if(arr[i]>maxi){
        maxi=arr[i];
    }

    findmax(arr,n,i+1,maxi);
}

int main()
{
    int arr[]={1,78,43,90,13,56,5,6};
    int n=8;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int i=0;
    
    findmax(arr,n,i,maxi);
    cout<<"Max element is : "<<maxi<<endl;
    findmin(arr,n,i,mini);
    cout<<"Min element is : "<<mini<<endl;

    return 0;
}