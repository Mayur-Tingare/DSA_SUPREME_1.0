#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[][3],int rows,int cols){
    int maxi=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}

int getmin(int arr[][3],int rows,int cols){
    int mini=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}


int main(){
     int arr[3][3];
    int rows=3;
    int cols=3;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"elements"<<endl<<endl;;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
 

// cout<<getmax(arr,rows,cols)<<endl;
cout<<getmin(arr,rows,cols)<<endl;

}