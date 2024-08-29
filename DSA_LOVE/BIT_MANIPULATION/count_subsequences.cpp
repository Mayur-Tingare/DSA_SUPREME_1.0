#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="abc";
    string ans="";

    for(int num=0;num<(1<<str.length());num++){
        string temp="";
        for(int i=0;i<str.length();i++){
            
            if(num&(1<<i)){
                temp.push_back(str[i]);
            }
        }
        if(temp.length()>=0){
        ans.push_back(temp);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;

    }

    return 0;
}