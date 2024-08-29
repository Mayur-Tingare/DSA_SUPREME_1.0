#include <bits/stdc++.h>
using namespace std;
class Animal{
    protected:
    
    int id;
    char c;

};
class Dog:public Animal{
    public:
    int getid(){
        return this->id;
    }

};


int main()
{
    Dog d1;
    cout<<d1.getid();
    return 0;
}