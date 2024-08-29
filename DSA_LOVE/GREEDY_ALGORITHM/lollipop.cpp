#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>prices{2,9,8,4,6,7};

    sort(prices.begin(),prices.end());
    // for(int i=0;i<prices.size();i++){
    //     cout<<prices[i]<<" ";
    // }
    int min_cost=0;
    int i=0;
    while(i<prices.size()){
        min_cost+=prices[i];
        prices.pop_back();
        prices.pop_back();
        i++;
    }


    cout<<min_cost;
    return 0;
}