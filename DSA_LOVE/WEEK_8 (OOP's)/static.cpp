#include <bits/stdc++.h>
using namespace std;

class Animal{
public:

static int a,b;

void getab(){
    cout<<this->a<<" "<<this->b<<endl;

}

static void displayCount() {
        std::cout << "Count: " <<endl;
    }


};

class dog:public Animal{
    public :

    void getab(){
        cout<<"We are in dog"<<endl;

    }
};

int Animal :: a=5;
int Animal :: b=10;


int main()
{
    Animal x;
    x.a=50;
    x.b=100;

    Animal y;

    y.a=200;
    y.b=400;



    


    y.getab();
    x.getab();

    x.displayCount();
    y.displayCount();

    Animal::displayCount();




    return 0;
}