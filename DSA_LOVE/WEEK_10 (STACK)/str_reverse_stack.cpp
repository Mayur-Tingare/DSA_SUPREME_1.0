#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str="babbar";

    stack<char>st;
    // st.push('s');
    // st.push('t');
    // st.push('r');
    // st.push('i');
    // st.push('n');
    // st.push('g');
    for(int i=0;i<str.size();i++){
        st.push(str[i]);
    }



    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}