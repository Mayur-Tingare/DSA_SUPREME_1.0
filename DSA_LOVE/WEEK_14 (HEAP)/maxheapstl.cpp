#include <bits/stdc++.h>
using namespace std;
int main()
{   
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(33);
    pq.push(4);
    pq.push(5);

    cout<<"top Element "<<pq.top()<<endl;
    pq.pop();
    cout<<"top Element "<<pq.top()<<endl;
    pq.pop();
    cout<<"top Element "<<pq.top()<<endl;
    pq.pop();
    cout<<"top Element "<<pq.top()<<endl;
    pq.pop();
    cout<<"top Element "<<pq.top()<<endl;
    pq.pop();
    cout<<"top Element "<<pq.top()<<endl;
    cout<<"size is:"<<pq.size()<<endl;
    // pq.pop();
    // cout<<"top Element "<<pq.top()<<endl;
    // cout<<"size is:"<<pq.size()<<endl;
    
    if(pq.size()){
        cout<<"pq is not empty"<<endl;
    }
    else{
        cout<<"pq is empty"<<endl;
    }






    return 0;
}