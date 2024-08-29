#include <bits/stdc++.h>
using namespace std;

void reverse(string &s,int start,int end){
    // Base Case
    if(start>=end){
        return;

    }

    // 1 Case solve krdo
    swap(s[start],s[end]);

    // Ab recursion Sambhal lega
    reverse(s,start+1,end-1);
}

int main()
{
    string str;
    cin>>str;

    reverse(str,0,str.length()-1);
    cout<<str;


    return 0;
}