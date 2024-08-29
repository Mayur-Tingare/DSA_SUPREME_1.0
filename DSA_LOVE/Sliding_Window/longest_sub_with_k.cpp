#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="aaabbccccccd";

    int l=0,r=0,maxlen=INT_MIN,len=0;
    map<int,int>mp;
    int k=2;

    while(r<s.length()){
        mp[s[r]]++;
        if(mp.size()>k){
            
                
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            
            
        }
        else{
             len=r-l+1;
        maxlen=max(maxlen,len);
        }
       
        
        r++;

    }

    cout<<maxlen<<endl;



    return 0;
}