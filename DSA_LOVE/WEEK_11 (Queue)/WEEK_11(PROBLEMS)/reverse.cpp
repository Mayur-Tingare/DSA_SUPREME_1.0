#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    stack<int>s;
        
        while(!q.empty()){
            int element=q.front();
            
            q.pop();
            
            s.push(element);
            
            
        }
        
        while(!s.empty()){
            int element=s.top();
            
            s.pop();
            
            q.push(element);

        }

        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }

    return 0;
}