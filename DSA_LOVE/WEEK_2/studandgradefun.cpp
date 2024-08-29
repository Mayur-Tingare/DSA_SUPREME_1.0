#include <bits/stdc++.h>
using namespace std;

char getgrade(int a){
    if(a>90){
        return 'A';
    }
    else if(a>80){
        return 'B';
    }
    else if(a>70){
        return 'C';
    }
    else if(a>=35){
        return 'D';

    }
    else {
        return 'F';
    }
}

int main(){
    int marks;
    cout<<"enter the marks :"<<endl;
    cin>>marks;
    char final_grade=getgrade(marks);
    cout<<"Final grade is : "<<final_grade<<endl;

}