#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int a=5;
    // a=7;
    cout<<a<<endl;
    
    // const data non-const pointer
    const int*b=new int(5);
    cout<<*b<<endl;
    int c=60;
    b=&c;
    cout<<*b<<endl;


    // const pointer non-const data
    int *const d=new int(6);
    cout<<*d<<endl;
    int e=70;
    // d=&e;     
    *d=90;                                  // error read only
    cout<<*d<<endl;

    
    // both data and pointer are const
    const int *const f=new int(7);
    // f=&e;                                        // error read only


    return 0;
}