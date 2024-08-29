// Q. find ith bit in an int

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n=10;
    int i=3;

    int mask=1<<i;

    if(n&mask){
        cout<<"ith bit is 1"<<endl;
    }
    else{
        cout<<"ith bit is 0"<<endl;
    }



    return 0;
}