#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    if(s.length()==2){
        int a=stoi(s.substr(0,1));
        int b=stoi(s.substr(1,1));

        if(b>a){
            cout<<a<<" "<<b;
        }
        else{
            cout<<"-1";
        }
}
else{
string z=s;

    int i=0;
    int j=1;

    

        while(z[j]=='0'){
            j++;
        }

        int a=stoi(z.substr(i,j));
        int b=stoi(z.substr(j,z.length()-(j)));

        cout<<a<<" "<<b;

}
    

    return 0;
}