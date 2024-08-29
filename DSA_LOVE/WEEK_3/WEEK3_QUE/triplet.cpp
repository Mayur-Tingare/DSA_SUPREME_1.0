// Triplet summ Question :

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40,50};
    int sum=90;

    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++){
            int element2=arr[j];
            
            for(int k=j+1;k<arr.size();k++){
                if(element+element2+arr[k]==sum){
                cout<<"Triplet Found :"<<"("<<element<<","<<element2<<","<<arr[k]<<")"<<endl;
                }
            }

            
        }
    }


}