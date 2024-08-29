// Union of two arrays


#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int brr[]={2,4,6,8};

    vector<int>ans;

    for(int i=0;i<5;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<4;i++){
        ans.push_back(brr[i]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}