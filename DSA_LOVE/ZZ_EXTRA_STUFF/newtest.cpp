#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    int input;

    for(int i=0;i<n;i++){
        cin>>input;
        arr.push_back(input);
    }

    sort(arr.begin(),arr.end());

    int count=1;

    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i+1]==arr[i]+1){
            count++;
        }
        else{
            maxi=max(maxi,count);
            count=1;
        }
    }
    cout<<endl;


    cout<<maxi;



    return 0;
}