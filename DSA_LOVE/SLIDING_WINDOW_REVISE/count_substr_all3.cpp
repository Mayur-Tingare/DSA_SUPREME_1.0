#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="bbacba";

    int count=0;
    int lastseen[3]={-1,-1,-1};


    for(int i=0;i<s.length();i++){
        lastseen[s[i]-'a']=i;

        if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1){
            count+=(1+min(lastseen[0],min(lastseen[1],lastseen[2])));

        }

    }


    cout<<count<<endl;



    return 0;
}