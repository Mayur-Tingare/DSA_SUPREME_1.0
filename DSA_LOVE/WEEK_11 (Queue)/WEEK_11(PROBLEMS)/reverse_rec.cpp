#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int>&q){
    if(q.empty()){
        return;
    }

    int element=q.front();
    q.pop();

    reverse(q);

    q.push(element);
}

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

    reverse(q);


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
        
    }




    return 0;
}