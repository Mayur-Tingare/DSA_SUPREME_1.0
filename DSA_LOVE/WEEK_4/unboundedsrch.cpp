#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int n=sizeof(a)/sizeof(int);
    int x=17;
    int i=0;
    int j=1;
    while(a[j]<x){
        i=j;
        j=j*2;
    }

    int start=i;
    int end=j;
    
    while(start<=end){
        int mid=(start+end)/2;

        if(a[mid]==x){
            cout<<mid<<endl;
            return mid;
        }
        else if(x>a[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;

        }

    }
    return 0;

}