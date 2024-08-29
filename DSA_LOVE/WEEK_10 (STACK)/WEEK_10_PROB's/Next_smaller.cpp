#include <bits/stdc++.h>
using namespace std;

void prevsmaller(vector<int>&v){
    vector<int>ans1(v.size());

    stack<int>st;
    st.push(-1);

    
    for(int i=0;i<v.size();i++){
        int curr=v[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans1[i]=st.top();
        st.push(curr);


    }
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
    }
}

void nextsmaller(vector<int>&v){
    vector<int>ans(v.size());

    stack<int>st;
    st.push(-1);

    
    for(int i=v.size()-1;i>=0;i--){
        int curr=v[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);


    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    

    nextsmaller(v);

    cout<<endl<<endl;

    prevsmaller(v);

    // Print stack

    
    

    

    

    return 0;
}