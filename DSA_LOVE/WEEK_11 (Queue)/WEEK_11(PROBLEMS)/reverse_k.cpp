#include <bits/stdc++.h>
using namespace std;
int main()
{

    int k=3;
    int m=k;

    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    q.push(10);
   
    int size=q.size();

    stack<int>s;

    while(m--){
        int element=q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int ele=s.top();
        s.pop();
        q.push(ele);

    }
    int now=size-k;
    while(now--){
        int front=q.front();
        q.pop();
        q.push(front);
        
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }



    return 0;
}