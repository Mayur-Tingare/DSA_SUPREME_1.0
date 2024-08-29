#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n=15;
    int i=3;
    int j=1;

    int amask=((-1)<<i+1);
    int bmask=((1<<j)-1);  // negation can also be other way
    
    int finalmask=amask|bmask;

    int ans=n&finalmask;

    cout<<ans;



    return 0;
}