#include <bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int>&st,int target){
    if(st.empty()){
        st.push(target);
        return;
    }

    int top_ele=st.top();
    st.pop();

    insertatbottom(st,target);

    // backtrack

    st.push(top_ele);

}

void reversestack(stack<int>&st){
    if(st.empty()){
        return;
    }

    int target=st.top();
    st.pop();

    reversestack(st);

    insertatbottom(st,target);



}



int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reversestack(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }



    return 0;
}