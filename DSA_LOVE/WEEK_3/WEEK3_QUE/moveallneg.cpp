#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,-2,-3,4,-1,6,6,9,-10};
    int n=sizeof(arr)/sizeof(int);
    
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}