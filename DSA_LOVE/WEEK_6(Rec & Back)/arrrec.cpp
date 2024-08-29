#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n,int i){
    if(i>=n) return;

    // 1 case solve kiya
    cout<<arr[i]<<" ";

    // ab recursion kr dega
    printarray(arr,n,i+1);
    

    // printarray(arr,n,++i);                            
    // error in i++ because it's post increament and copying 0 again and again and not getting
    // updataed cause we're copying before increament
}

int main()
{
    int arr[5]={10,20,30,40,50};

    int n=5;

    int i=0;
    printarray(arr,n,i);


    return 0;
}