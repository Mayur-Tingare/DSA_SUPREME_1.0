#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[100];

    string str;

    ch[0]='a';
    ch[1]='b';
    ch[2]='\0';
    ch[3]='c';
    cout<<ch<<endl;

    str[0]='a';
    str[1]='b';
    str[2]='\0';
    str[3]='c';
    cout<<str<<endl;

    str.push_back('@');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;

    string a="Mayur";
    string b="Mayuresh";
    // string c="Mayur";

    if(a.compare(b)==0){
        cout<<"a & b are exactly same !"<<endl;
    }
    else{
        cout<<"a & b are not exactly same !"<<endl;
    }

    cout<<a.empty()<<endl;

    cout<<a.find("ur")<<endl;
    a.replace(0,2,b);
    cout<<a<<endl;
    a.erase(2,2);
    cout<<a<<endl;
}