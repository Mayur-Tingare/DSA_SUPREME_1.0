#include <bits/stdc++.h>
using namespace std;

void printmiddle(stack<int>&st,int &total_size){
    if(st.size()==0){
        cout<<"There is No element in stack"<<endl;
        return;
    }
    if(st.size()==(total_size/2)+1){
        cout<<"Middle element is : "<<st.top()<<endl;
        return;
    }

    int temp=st.top();
    st.pop();

    printmiddle(st,total_size);

    // backtrack

    st.push(temp);
}

int main()
{
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    int totalsize=st.size();

    printmiddle(st,totalsize);



    return 0;
}