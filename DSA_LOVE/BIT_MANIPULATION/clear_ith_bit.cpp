#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n=10;
    int ans;

    int i=3;
    int mask =(-1<<i);
    mask=~(mask);

    ans=mask&n;

    cout<<ans;
    

    return 0;
}