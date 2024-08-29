/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
int lastindex(vector<int>arr1,int target1){
    int s1=0;
    int e1=arr1.size()-1;
    int mid1=(s1+e1)/2;
    int ans1=0;
    
    while(s1<=e1){
        if(target1==arr1[mid1]){
            ans1=mid1;
            s1=mid1+1;
        }
        else if(target1<arr1[mid1]){
            e1=mid1-1;
        }
        else{
            s1=mid1+1;
        }
        mid1=(s1+e1)/2;
    }
    return ans1;
}


int firstindex(vector<int>arr2,int target2){
    int s2=0;
    int e2=arr2.size()-1;
    int mid2=(s2+e2)/2;
    int ans2=0;
    
    while(s2<=e2){
        if(target2==arr2[mid2]){
            ans2=mid2;
            s2=mid2-1;
        }
        else if(target2<arr2[mid2]){
            e2=mid2-1;
        }
        else{
            s2=mid2+1;
        }
        mid2=(s2+e2)/2;
    }
    return ans2;
}

int main()
{
    vector<int> v{1,2,4,4,4,4,4,4,4,4,4,6,7};
    int target=4;
    int ans1=firstindex(v,target);
    int ans2=lastindex(v,target);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    
    

    return 0;
}

