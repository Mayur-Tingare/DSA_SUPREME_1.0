#include <bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"A"<<endl;

    }
    else if(marks>=80){
        cout<<"B"<<endl;

    }
    else if(marks >=60){
        cout<<"C"<<endl;

    }
    else if(marks>=40){
        cout<<"D"<<endl;
        
    }
    else{
        cout<<"FAIL"<<endl;

    }
}