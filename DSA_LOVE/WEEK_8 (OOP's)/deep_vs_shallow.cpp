#include <bits/stdc++.h>
using namespace std;

class Mayur{

public:
    int x;
    int *y=new int;

    Mayur(int x,int y){
        this->x=x;
        this->y=(new int (y));

    }

    // yaha pe auto/default dumb copy ctor call jo raha hai

    // ham apna deep copy wala likhenge manually (our smart deep copy)

    Mayur(Mayur &obj){
        this->x=obj.x;
        this->y=new int(*obj.y);

    }

    void print(){
        cout<<x<<" "<<y<<" "<<*y<<endl;
    }


};


int main()
{
    Mayur a(1,2);
    a.x=10;
    a.y=new int(20);
    cout<<"OF A"<<endl;

    a.print();

    Mayur b=a;

    cout<<"OF B"<<endl;
    b.print();

    *b.y=45;

    cout<<"OF B"<<endl;



    b.print();

        cout<<"OF A"<<endl;

        a.print();






    return 0;
}