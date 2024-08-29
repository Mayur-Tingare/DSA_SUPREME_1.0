// Zero's and ones sorting 

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr{0,1,0,1,0,1,0,1,0,1,0,1};

    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(start<= end){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }





}