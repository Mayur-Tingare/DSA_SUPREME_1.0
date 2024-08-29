#include <bits/stdc++.h>
using namespace std;
int binarysearch (int arr[],int n,int target){
    int start=0;
    int end=n-1;
    

    int mid= start+(end-start)/2;
    while(start<=end){
        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid= start+(end-start)/2;
    }
    // terget not found 
    return -1;
}

int main(){
    int a[]={2,3,4,7,8,12,90};
    int n=sizeof(a)/sizeof(int);
    int l=0;
    int h=n-1;
   
int target=90;

int index=binarysearch(a,n,target);
if(index==-1){
    cout<<"Taget not found"<<endl;

}
else{
    cout<<"Taget Found at "<<index<<endl;

}
return 0;
}