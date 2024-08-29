#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[]={10,20,30,40,50,60,70,80};
    int start=0;
    int end=7;  // (n-1)
   while(true){
    if(start>end){
        break;
    }
    if(start==end){
        cout<<a[start]<<" ";
    }
    else{
        cout<<a[start]<<" ";
        cout<<a[end]<<" ";
   }
        start++;
        end--;
    }
   

}