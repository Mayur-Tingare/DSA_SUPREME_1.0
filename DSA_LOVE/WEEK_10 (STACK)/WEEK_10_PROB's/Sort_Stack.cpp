#include <bits/stdc++.h>
using namespace std;

void insertsorted(stack<int>&st,int &target){
    if(st.empty()){
        st.push(target);
        return;
    }
    
    else if(st.top() >= target){
        st.push(target);
        return;
    }
    int top_element=st.top();
    st.pop();

    insertsorted(st,target);

    // Backtrack
    st.push(top_element);

}

void sortstack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int top=st.top();
    st.pop();

    sortstack(st);

    insertsorted(st,top);

}


int main()
{

    stack<int>st;
    st.push(7);
    st.push(11);
    st.push(3);
    st.push(5);
    st.push(9);

    int target=5;

    

    sortstack(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }




    return 0;
}