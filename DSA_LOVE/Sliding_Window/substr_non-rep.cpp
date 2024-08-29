#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s="";
    int hash[256]={-1};

    int l=0,r=0;

    int maxxlen=INT_MIN;
    int len=0;

    while(r<s.length()){
        if(hash[s[r]]!=-1){
            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;

            }
            
        }
        
        len=r-l+1;
        
        hash[s[r]]=r;
        maxxlen=max(maxxlen,len);
        r++;
        
        

    }

    cout<<maxxlen<<endl;




    return 0;
}