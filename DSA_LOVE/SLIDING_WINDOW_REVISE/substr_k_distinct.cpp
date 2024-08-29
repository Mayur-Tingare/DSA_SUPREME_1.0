#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="aaabbbbbbbccccccccd"; 
    int k=2;

    int l=0;
    int r=0;
    int len=0;
    int maxlen=INT_MIN;
    map<int,int>mp;

    while(r<s.length()){
        mp[s[r]]++;

        if(mp.size()<=k){
            len=r-l+1;
            maxlen=max(maxlen,len);
        }
        else{
            mp[s[l]]--;
            if(mp[s[l]]==0){
                mp.erase(s[l]);
            }
            l++;
        }
        r++;
    }

    cout<<maxlen<<endl;



    return 0;
}