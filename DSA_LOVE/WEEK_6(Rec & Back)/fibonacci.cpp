#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int main()
{
    
    int n;
    cout<<"Enter the term you want to see on fibonacci :"<<endl;
    cin>>n;

    vector<int>dp(n+1,-1);  

    int ans=fibonacci(n);
    cout<<n<<" th term is : "<<ans;



    return 0;
}