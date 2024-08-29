#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>&st,int target){
    if(st.empty()){
        st.push(target);
        return;
    }

    int top_ele=st.top();
    st.pop();

    solve(st,target);

    // backtrack

    st.push(top_ele);

}

void insertbottom(stack<int>&st){
    if(st.empty()){
        cout<<"Stack is Empty cant insert at bottom."<<endl;
    }
    
    int target=st.top();
    

    st.pop();

    solve(st,target);
}

int main()
{

    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    insertbottom(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }



    return 0;
}