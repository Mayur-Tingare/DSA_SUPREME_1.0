#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr {1,10,9,7,14,6};
    int n=arr.size();

    for(int round=1;round<n;round++){
        int swapped=0;
        for(int j=0;j<n-round;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped++;
            }
        }
        if(swapped==0){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}