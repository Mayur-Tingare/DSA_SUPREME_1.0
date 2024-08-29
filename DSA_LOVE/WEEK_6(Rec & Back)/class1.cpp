#include <bits/stdc++.h>
using namespace std;

void printcount(int n){
    if(n==0) return;

    cout<<n;
    printcount(n-1);

}

int fact(int n){
    if(n==1) return 1;

    cout<<"n Is At : "<<n<<endl;
    int ans=n*fact(n-1);
    return ans;

}

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int ans;
    ans=fact(n);
    cout<<ans;
    cout<<endl;
    

    printcount(n);
    


    return 0;
}