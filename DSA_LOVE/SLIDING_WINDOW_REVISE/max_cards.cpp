#include <bits/stdc++.h>
using namespace std;
int main()
{
    // case is you can only pick from front and back only not from middle;

    vector<int>arr={9,9,1,2,7,2,1,9,9};
    int k=4;


    int l=0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int maxi=sum;

    int r=k-1;

    int rightindex=arr.size()-1;

    while(r>=0){
        sum-=arr[r];
        sum+=arr[rightindex];

        maxi=max(maxi,sum);
        rightindex--;
        r--;
    }
    cout<<maxi<<endl;

    return 0;
}