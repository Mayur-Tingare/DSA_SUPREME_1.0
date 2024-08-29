#include <bits/stdc++.h>
using namespace std;

class animal{
    // long long size;
    // int age;
    // int height;
    // char ch;

    // state / property
    private:
   


    public:
    int weight;
    int age;
    string name;

    animal(){
        cout<<"Default Constructor is called ."<<endl;
        this->weight=0;
        this->name="Lion";
        this->age=5;


    }
    animal(int age){
        this->age=age;
       
        cout<<"Param constructor is called."<<endl;
        // this->weight=90;
    }
    animal(int age, string name){
        this->age=age;
        this->name=name;
        cout<<"Param constructor 2 is called."<<endl;

    }

    animal(animal &obj){
        this->age=age;
        this->name=name;
        cout<<"I'm inside copy constructor"<<endl;

    }

    ~animal(){
        cout<<"I'm inside Destructor"<<endl;
    }

    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){
        cout<<"Sleeping"<<endl;
    }

    int getweight(){
        return weight;
    }

    void setweight(int weight){
       this-> weight=weight;
    }
    
   
    
    
};


int main()
{

    // cout<<"Size of class is: "<<sizeof(animal)<<endl;

    // animal ramesh;
    // ramesh.age=12;
    // ramesh.name="Lion";

    // cout<<"Age of ramesh is : "<<ramesh.age<<endl;
    // cout<<"Name of animal is : "<<ramesh.name<<endl;

    // ramesh.sleep();
    // ramesh.eat();

    // ramesh.setweight(101);

    // cout<<"Weight : "<<ramesh.getweight()<<endl;

    // animal * dhiraj=new animal;

    // (*dhiraj).age=15;
    // (*dhiraj).name="Billli";

    // // alternativr way
    // dhiraj->name="Sher";
    // dhiraj->age=25;

    // dhiraj->sleep();
    // dhiraj->eat();
    // dhiraj->setweight(15);
    // cout<<dhiraj->getweight();

    // animal a;
    // animal*p=new animal;
    // animal*q=new animal();

    // animal*r=new animal(15);
    // animal*s=new animal(10,"mayur");
    // animal*t=new animal(80,"mahesh");
    // animal a;

    // animal u=a;

    // animal v(a);
    // animal w(*q);    // this is because simple q is pointer which stores address and hence need to pass by dereferencing it
    
    // cout<<"Z is created :"<<endl;
    // animal z;
    // cout<<"x is created :"<<endl;
    // animal * x=new animal;
    // x->age=5;

    // // need to delete the heap obj manually i.e. call destructor manually.
    
    // delete x;
    animal g(10);
    cout<<g.age<<" "<<g.name<<" "<<g.getweight()<<endl;


 

    return 0;
}