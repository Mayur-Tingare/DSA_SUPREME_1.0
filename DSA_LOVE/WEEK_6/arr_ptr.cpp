#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,10,2,3,4,5,6,7,8,9};

    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;

    int *p=arr;
    cout<<p<<endl;
    cout<<&p<<endl;   // this is pointers address

    cout<<*arr<<endl;
    cout<<*arr + 1<<endl;
    cout<<*(arr) + 1<<endl;
    cout<<*(arr+1)<<endl;

    int i=0;
    cout<<arr[i]<<endl;
    cout<<i[arr]<<endl;  // Doesnt make any sense both the above and this syntaxes gives the same answer;
    // arr=arr+2;

    int *ptr=arr;
    ptr=ptr+2;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    

}