#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{10,1,3,2,7,4,5,5,6};

    for(int round=1;round<arr.size();round++){
        int val=arr[round];
    
        int j=round-1;
        for(;j>=0;j--){
            if(arr[j]>val){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=val;
    }



for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}