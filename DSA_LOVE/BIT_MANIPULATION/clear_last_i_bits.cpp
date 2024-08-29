#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;

    int i=2;

    int mask=(-1<<i);

    int ans=mask&n;

    cout<<ans;


    return 0;
}