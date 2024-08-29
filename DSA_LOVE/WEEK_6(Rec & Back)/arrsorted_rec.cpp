#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }

    return sorted(arr,n,i+1);
    
}

int main()
{
    int arr[]={1,2,3,4,5,6,50,7,8,9,10};
    int n=10;
    int i=0;

    bool ans=sorted(arr,n,i);
    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not Sorted"<<endl;
    }

    return 0;
}