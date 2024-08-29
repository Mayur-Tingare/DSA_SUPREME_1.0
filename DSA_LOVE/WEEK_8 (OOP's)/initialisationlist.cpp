#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int x;
    const int y;
    const int z;

    // Animal(int aval,int bval,int zval=0){
    //     this->x=aval;
    //     this->y=bval;
    //     this->z=zval;
    // }

    Animal(int aval,int bval,int zval=0):x(aval),y(bval),z(zval){};

};

int main()
{
    Animal a(15,25);
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;




    return 0;
}