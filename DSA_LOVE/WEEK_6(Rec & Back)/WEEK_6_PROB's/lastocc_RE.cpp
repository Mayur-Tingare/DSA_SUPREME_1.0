#include <bits/stdc++.h>
using namespace std;

int findlastoccurRL(string &str,char x, int &ans,int i){
    if(i<0){
        return ans;
    }
    if(str[i]==x){
        return i;
    }

    findlastoccurRL(str,x,ans,i-1);

}

void findlastoccurLR(string &str,char x, int &ans,int i){
    if(i>=str.length()){
        return;
    }
    if(str[i]==x){
        ans=i;
    }

    findlastoccurLR(str,x,ans,i+1);

}

int main()
{
    string str;
    cin>>str;
    int ans=-1;
    char x;
    cout<<"Enter to find last occcur :"<<endl;
    cin>>x;
    int i=str.length()-1;

    // findlastoccurLR(str,x,ans,i);
    // cout<<ans<<endl;

    ans=findlastoccurRL(str,x,ans,i);
    cout<<ans;


    return 0;
}