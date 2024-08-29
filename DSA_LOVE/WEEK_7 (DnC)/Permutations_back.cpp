#include <bits/stdc++.h>
using namespace std;

void permutations(string &str,int i){       // Reference se jaan bojh kr liya taki backtracking kr paye
    if(i>=str.length()){
        cout<<str<<" ";
        return ;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);

        permutations(str,i+1);

        swap(str[i],str[j]);
    }
}


int main()
{
    string str="abc";
    int i=0;

    permutations(str,i);
    return 0;
}