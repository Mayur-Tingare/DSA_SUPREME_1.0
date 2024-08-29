#include <bits/stdc++.h>
using namespace std;

vector<bool>Sieve(int n){
    vector<bool>sieve(n+1,true);
    sieve[0]=sieve[1]=0;

    for(int i=2;i<=sqrt(n);i++){                 // sqrt(n) this is the optimisation number 2;
        if(sieve[i]){
            // int j=i*2;                   // this has been optimised; in line below;
            int j=i*i;
            while(j<=n){
                sieve[j]=0;
                j=j+i;
            }

        }
    }
    return sieve;
}


int main()
{
    vector<bool>sieve=Sieve(25);
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
        cout<<i<<" ";
        }
    }
    return 0;
}