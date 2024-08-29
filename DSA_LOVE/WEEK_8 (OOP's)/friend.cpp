#include <bits/stdc++.h>
using namespace std;
class A{
    private:
    int x;

    public:
    A(int val):x(val){};

    void setx(int val){
        x=val;
    }

    int getx () const{
        return x;
    }

    friend class B;              //  friend keyword used

};

class B{
    public:

    void print(A &a){
        // cout<<a.getx()<<endl;
        cout<<a.x<<endl;                 // private is accessed withoud getters and setters by friend
    }
};


int main()
{
    A a(5);
    B b;
    b.print(a);

    return 0;
}