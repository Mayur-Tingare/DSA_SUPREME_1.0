#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[100];
    bool flag=0;
    //0 - not found
    //1 - found

    int n;
    cout<<"Enter the numbers you want to enter :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key you want to find :"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==a[i]){
            
            flag=1;
            break;
            
        }
        
    }
    if(flag){
        cout<<"Found "<<endl;
        
    }
    else{
        cout<<"Not found"<<endl;

    }

}
