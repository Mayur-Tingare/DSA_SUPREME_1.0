#include <bits/stdc++.h>
using namespace std;

void printrowwisesum(int arr[][3],int rows,int cols){
    // row wise
   
    for(int i=0;i<rows;i++){
         int ans=0;
        for(int j=0;j<cols;j++){
            ans=ans+arr[j][i];
            
        }
        cout<<ans;
        cout<<endl;

    }
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
            cout<<arr[i][j];
        }
        cout<<endl;
    }
cout<<endl;

    printrowwisesum(arr,rows,cols);


}