#include<bits/stdc++.h>
using namespace std;

void solve(int arr[]){
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<sizeof(arr)<<endl;
    arr[0]=10;


}

int main(){
    int arr[10]={1,2,3,4};
    cout<<arr<<endl;
    solve(arr);
    cout<<sizeof(arr)<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
}