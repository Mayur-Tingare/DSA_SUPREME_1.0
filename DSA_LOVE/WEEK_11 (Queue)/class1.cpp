#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

   
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    
    
    return 0;
}