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
    q.push(90);

    int n=q.size();
    int mid=n/2;
    
    // cout<<mid<<" "<<n-mid<<" "<<endl;



    queue<int>q2;
    while(mid--){
        int front=q.front();
        q.pop();
        q2.push(front);

    }
   
   
    int n1=q2.size();

    for(int i=0;i<n1;i++){
        // if(q2.empty()){
        //     break;
        // }
        int first=q2.front();
        q2.pop();
        q.push(first);
        int second=q.front();
        q.push(second);
        q.pop();

    }

    if(n&1){
        int remain=q.front();
        q.pop();
        q.push(remain);
    }



    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }

    return 0;
}