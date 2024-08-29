#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second < b.second;
}

int solve(int arr[],int dept[],int n){

    vector<pair<int,int>>data;

    for(int i=0;i<n;i++){
        data.push_back({arr[i],dept[i]});
    }

    sort(data.begin(),data.end(),cmp);

    int count=1;
    int last_dept=data[0].second;
    
    for(int i=1;i<n;i++){
        if(data[i].first >= last_dept){
            count++;
            last_dept=data[i].second;
        }
    }
    return count;



}

int main()
{

    int n=6;
    int arr[]={630,710,720,830,845,1550};
    int dept[]={640,930,910,900,1050,1750};

    int ans=solve(arr,dept,n);

    cout<<ans;


    return 0;
}