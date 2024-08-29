#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[10]="SherBanoo";

    char*c=ch;

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<c<<endl;
    cout<<*(ch+3)<<endl;
    cout<<&c<<endl;
    cout<<c+2<<endl;
    cout<<c+4<<endl;
    cout<<*c<<endl;
    cout<<*c+2<<endl;           // Typecasting here ;


    char ch1='k';
    char *c1=&ch1;   // here we need &ch1 cause we are giving single char not array
    cout<<c1<<endl;
    cout<<ch1<<endl;
    




}