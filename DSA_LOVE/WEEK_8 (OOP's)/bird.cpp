// consider we're client and using bird.h file

#include <iostream>
#include "bird.h"
using namespace std;

void birddoessomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}

int main()
{
    Bird *bird=new sparrow();
    birddoessomething(bird);

    // Bird *bd=new Bird();
    
    // As said earlier it is giving erroer
    // cause we cant instantiate abstract class


    return 0;
}