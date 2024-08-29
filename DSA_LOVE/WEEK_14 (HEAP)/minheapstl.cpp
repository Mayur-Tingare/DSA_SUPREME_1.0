#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Implementation of min heap (priority queue); 

    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(0);

    cout<<"Top element is:"<<pq.top()<<endl;


    return 0;
}