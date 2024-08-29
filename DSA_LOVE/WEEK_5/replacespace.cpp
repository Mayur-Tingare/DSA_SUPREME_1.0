#include<bits/stdc++.h>
using namespace std;

void replace(char ch[100]){
    
    int i=0;

    while(ch[i]!='\0'){
        if(ch[i]==' '){
            ch[i]='@';
        }
        i++;

    }
    

}

int main(){
    char ch[100];

    cout<<"Enter Your Name : "<<endl;
    // cin>>ch;
 
    // getline(cin,ch);

    cin.getline(ch,100);

    cout<<"Your Name Is : "<<ch<<endl;
    replace(ch);
    cout<<"Replaced string is : "<<ch<<endl;
   
}