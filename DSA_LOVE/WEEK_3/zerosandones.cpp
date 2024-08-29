#include <bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={0,1,0,1,1,1,0,0,0,0,1,0,0,1,0,1};
 int numzero=0;
 int numone=0;

 for(int i=0;i<16;i++){
    if(arr[i]==0){
        numzero++;
    }
    else{
        numone++;
    }
 }
 cout<<"Number of one's are :"<<numone<<endl;
 cout<<"Number of Zero's are :"<<numzero<<endl;
  

 return 0;


}