#include <bits/stdc++.h>
using namespace std;

//synatx for custom comparator for string
bool cmp(int first,int second){
    return first>second;
}

//synatx for custom comparator for vector(int)
bool compare(int first,int second){
    return first>second;
}

int main(){
    string s="babbar";
    sort(s.begin(),s.end(),cmp);

    vector<int>arr{4,2,5,1,3};
    sort(arr.begin(),arr.end(),compare);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<s;

}