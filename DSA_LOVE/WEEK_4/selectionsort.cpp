#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr {5,4,3,2,1}; 

    int n=arr.size();

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }


for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
    }

}