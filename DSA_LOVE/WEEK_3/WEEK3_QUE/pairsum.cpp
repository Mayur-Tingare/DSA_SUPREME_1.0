// pairsum question :

#include <bits/stdc++.h>
using namespace std;
int main(){
      vector<int>arr{10,20,30,40,50,60,70};
    int sum=90;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++){
            cout<<"Pair found:"<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            if(element+arr[j]==sum){
            cout<<"Pair found:"<<"("<<element<<","<<arr[j]<<")"<<endl;
            }
        }
    }

}