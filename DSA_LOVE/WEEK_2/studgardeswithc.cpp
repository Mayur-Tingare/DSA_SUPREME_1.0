#include <bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks :"<<endl;
    cin>>marks;
    switch(marks/10){
        case 10:cout<<"TOPPER";break;
        case 9: cout<<"A";break;
        case 8: cout<<"B";break;
        case 7: cout<<"C";break;
        case 6: cout<<"D";break;
        default : cout<<"Fail";
    }
}