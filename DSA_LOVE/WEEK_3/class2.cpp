#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    // But if we write explicitly then size will return same as defined
    // i.e. written in brackets

    vector<int>brr(10,-101);  // initialized all elements with -101 and default is 0

    cout<<brr.size()<<endl;
    cout<<brr.capacity()<<endl;
    cout<<endl;

    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";

    }
 
    cout<<endl;

    vector<int> crr{10,20,30,40,50};
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";

    }
    cout<<endl;


    cout<<crr.empty()<<endl;



}