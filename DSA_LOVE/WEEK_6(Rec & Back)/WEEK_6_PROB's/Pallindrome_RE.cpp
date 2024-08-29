#include <bits/stdc++.h>
using namespace std;

bool check(string & str,int s,int e){
    if(s>=e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    return check(str,s+1,e-1);
    
    
}

int main()
{
    string str="raceecar";
    int start=0;
    int end=str.length()-1;

    bool ans=check(str,start,end);
    cout<<ans<<endl;
    return 0;
}