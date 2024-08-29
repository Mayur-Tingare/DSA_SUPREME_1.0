/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class animal{
    public:
    int a;
    int b;
    
    // animal(int a,int b){
    //     this->a=a;
    //     this->b=b;
    //     cout<<"i am inside param constructor"<<endl;
    // }
};


int main()
{
    animal obj;
    cout<<obj.a<<" "<<obj.b<<endl;

    return 0;
}