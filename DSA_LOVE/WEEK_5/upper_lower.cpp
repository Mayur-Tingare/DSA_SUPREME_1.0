#include <bits/stdc++.h>
using namespace std;

void toupper(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-'a'+'A';
        }
        
        
    }
}
void tolower(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
           str[i]=str[i]-'A'+'a';
        }
        
        
    }
}


int main()
{
    string str;
    cin>>str;
    toupper(str);
    cout<<str<<endl;
    tolower(str);
    cout<<str<<endl;

    

    return 0;
}