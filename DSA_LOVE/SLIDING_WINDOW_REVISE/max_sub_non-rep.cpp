#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="cadbzabcd";

    int l=0;
    int r=0;
    int maxlen=INT_MIN;
    int hash[256]={-1};
    

    while(r<s.length()){
        if(hash[s[r]]!=-1){
            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
        }

        int len=r-l+1;
        maxlen=max(maxlen,len);
        hash[s[r]]=r;
        r++;
    }
    cout<<maxlen<<endl;




    return 0;
}