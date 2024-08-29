#include <bits/stdc++.h>
using namespace std;

int bsearch(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid+1]==target){
            return mid+1;
        }

        if (arr[mid]>=target){
            end=mid-2;
        }
        else{
            start=mid+2;
        }
        
    }
    return -1;
}

int main(){
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target=80;
    int ans=bsearch(arr,target);
    
    cout<<"The "<<target<<" Found at "<<ans<<" th Index"<<endl;

}