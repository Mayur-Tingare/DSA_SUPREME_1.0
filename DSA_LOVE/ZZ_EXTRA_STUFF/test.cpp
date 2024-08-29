#include <bits/stdc++.h>
using namespace std;
int main()
{
    string main="abc";
    string s;
    cin>>s;

    string a=s;
    string b=s;
    string c=s;
    
    

    swap(a[0],a[1]);
    swap(b[1],b[2]);
    swap(c[0],c[2]);


    // cout<<a<<endl;
    
    // cout<<b<<endl;
    // cout<<c<<endl;

    if(s==main){
        cout<<"YES";
    }

    else if(main==a){
        cout<<"IN A"<<endl;

        cout<<"YES";
    } 
    else if(main==b){
        cout<<"IN B"<<endl;
        cout<<"YES";
    }
    else if(main==c){
        cout<<"IN C"<<endl;
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }




    return 0;
}