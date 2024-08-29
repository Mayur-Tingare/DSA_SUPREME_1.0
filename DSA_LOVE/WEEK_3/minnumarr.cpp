#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,8,3,9,5,6,4,7,99};
    int min=INT_MAX;    // Very good practice to avoid all failures of all negative numbers and all;
    


    for(int i=0;i<10;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<min<<endl;

}