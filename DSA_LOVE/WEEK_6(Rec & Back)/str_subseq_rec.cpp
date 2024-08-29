#include <bits/stdc++.h>
using namespace std;

void printsubsequence(string str,string output,int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }

    // exclude
    printsubsequence(str,output,i+1);

    /// include
    // below line is respnsible for concatenation of str and output string;
    output.push_back(str[i]);
    printsubsequence(str,output,i+1);            // include must be aftter exclude to avoid pop() cause we need to 
                                                // pass same string to exclusion hence;

}

int main()
{
    string str="abc";
    string output="";
    int i=0;
    
    printsubsequence(str,output,i);


    return 0;
}