#include <bits/stdc++.h>
using namespace std;

bool checkkey(string str,int n,char key,int i){
    if(i>=n) return false;

    if(str[i]==key){
        return true;

    }

    return checkkey(str,n,key,i+1);
    
}

int main()
{
    string str="Love babbar";
    char key='r';
    int i=0;
    int length=str.length();
    bool ans=checkkey(str,length,key,i);
    cout<<ans<<endl;



    return 0;
}