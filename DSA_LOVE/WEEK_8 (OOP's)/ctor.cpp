#include <bits/stdc++.h>
using namespace std;

class box{
    private:
    int width;

    box(int w):width(w){};

    public:
    

    int getwidth() const{
        return width;
    }

    void setwidth(int w){
        width=w;
    }

    friend class boxfactory;
};

class boxfactory{
    int count;

    public:
    box getAbox(int _w){
        ++count;
        return (box(_w));
    }
};

int main()
{

    // box b(5);

    // cout<<b.getwidth()<<endl;

    boxfactory bfact;
    
    box b=bfact.getAbox(5);
    cout<<b.getwidth()<<endl;

    return 0;
}