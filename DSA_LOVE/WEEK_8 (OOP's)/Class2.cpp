#include <bits/stdc++.h>
using namespace std;

class animal{
    private:                  // Full Encapsulation when we hide all data members and member functions.
    int age;
    int weight;


    void eat(){
        cout<<"eating"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    int getweight(){
        return this->weight;
    }
    int setweight(int weight){
        this->weight=weight;
    }


};

int main()
{
    return 0;
}