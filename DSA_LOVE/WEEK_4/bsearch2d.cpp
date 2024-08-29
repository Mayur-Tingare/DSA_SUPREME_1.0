#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[][5],int size,int target,int start,int end,int cols){
    int mid=start+(end-start)/2;
    
    
    while(start<=end){

        int rowi=mid/cols;
        int coli=mid%cols;
        
        if (arr[rowi][coli]==target){

            cout<<"Found at Col. Number "<<coli+1<<" and Row Number "<<rowi+1;
            return true;
        }
        if(arr[rowi][coli]>target){
            end=mid-1;
        }
        else{
            start=mid+1;;
        }
        mid=start+(end-start)/2;

    }
    return false;
}



int main(){
    int arr[5][5]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    
    int rows=5;
    int cols=5;
    int target=15;
    int start=0;
    int size=rows*cols;
    int end=size-1;

    bool ans=bsearch(arr,size,target,start,end,cols);

    if(ans){
        cout<<endl;
        
        cout<<"Found"<<endl;

    }
    else{
        cout<<"Not Found"<<end;

    }


}