#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<int> rank,int np,int mid){
    int nowonprata=0;

    for(int i=0;i<rank.size();i++){
        int j=1;;
        int r=rank[i];
        int timetaken=0;

        while(true){
            if(timetaken+j*r <=mid){
                nowonprata++;
                timetaken=timetaken+j*r;
                j++;
            }
            else{
                break;
            }

        }
        if(nowonprata>=np){
            return true;

        }


    }
    return false;
}

int mintime(vector<int> rank,int nc,int np){
    int start=0;
    int highrank=*max_element(rank.begin(),rank.end());
    int end=highrank*(np*(np+1)/2);
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(ispossible(rank,np,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    return ans;
}

int main(){
    int test;
    cin>>test;
    

    while(test--){
        int np,nc;
    cin>>np>>nc;

    vector<int>rank;
    while(nc--){
        int r;
        cin>>r;
        rank.push_back(r);
    }
    cout<<mintime(rank,nc,np);
    cout<<endl;
    cout<<"Another case : "<<endl;

    
    }

}