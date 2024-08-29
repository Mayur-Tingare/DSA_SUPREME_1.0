#include <bits/stdc++.h>
using namespace std;

int solve(int dividend,int divisor){
    int start=0;
    int end=abs(dividend);
    int ans=0;
    int mid=start+(end-start)/2;
    if(dividend==-2147483648 && divisor== -1 ){
        return 2147483647;
    }

    while(start<=end){
        

        if(abs(mid*divisor)==abs(dividend)){
            ans=mid;
        }
        if(abs(mid*divisor)>abs(dividend)){
            // left search

            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;

        }
        mid=start+(end-start)/2;

        
        
    }
    if(dividend >0 && divisor>0 || dividend <0 && divisor<0){
            return ans;
        }
        else{
            return -ans;
        }
}

int main(){
    int dividend;
    cout<<"Enter the dividend : "<<endl;
    cin>>dividend;
    int divisor;
    cout<<"Enter The Divisor : "<<endl;
    cin>>divisor;

    int ans=solve(dividend,divisor);
    cout<<"The Division of "<<dividend<<" divided by "<<divisor<<" is : "<<ans;
}