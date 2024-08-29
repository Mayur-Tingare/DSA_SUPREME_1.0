#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<long long int>trees,long long int m,int mid){
    long long int woodcollected=0;
    for(int i=0;i<trees.size();i++){
        if(trees[i]>mid){
            woodcollected+=trees[i]-mid;
        }
    }
    return woodcollected>=m;
}

long long int sawblade(vector<long long int>trees,long long int m,long long int n){
    long long int start=0;
    long long int end =*max_element(trees.begin(),trees.end());
    long long int ans;
    while(start<=end){
        long long int mid=start+(end-start)/2;
        if(ispossible(trees,m,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    long long int m,n;
    vector<long long int> trees;
    cin>>m;
    cout<<endl;
    cin>>n;

    while(n--){
        long long int height;
        cout<<"Enter tree height"<<endl;
        cin>>height;
        trees.push_back(height);
    }

    cout<<sawblade(trees,m,n);


}