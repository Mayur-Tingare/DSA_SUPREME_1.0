#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number Whise Sqrt You Want :"<<endl;
    cin>>n;

    int target=n;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    double ans=-1;
    
    while(s<=e){
    if(mid*mid<n){
        ans=mid;
        s=mid+1;
    }
    else if (mid*mid>n){
        e=mid-1;
    }
    else if(mid*mid==target){
        ans=mid;

        

    }
    mid=s+(e-s)/2;
    }
    

    int precision;
    cout<<"Enter the digits upto which you want precision : " ;
    cin>>precision;
    double step=0.1;
    

    for(int i=0;i<precision;i++){
        for(double j=ans;j*j<=n;j=j+step){
            ans=j;
        }
        step=step/10;
    }

    cout<<ans<<endl;

    return 0;



    
    }