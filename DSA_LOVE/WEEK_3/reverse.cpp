#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[]={1,2,3,4,5,6,7,8,9};
   int start=0;
   int end=8;

   while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
   } 
   
   for(int i=0;i<9;i++){
    cout<<a[i]<<" ";

   }
}