#include<bits/stdc++.h>
using namespace std;


void trans(int arr[][3],int rows,int cols,int transpose[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[j][i]=arr[i][j];
        }
        cout<<endl;
    }
}

void printarray(int arr[][3],int rows,int cols){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
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
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
 int transpose[3][3];
trans(arr,rows,cols,transpose);
printarray(transpose,rows,cols);

}