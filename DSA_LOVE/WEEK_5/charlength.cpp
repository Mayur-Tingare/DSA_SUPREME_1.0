#include<bits/stdc++.h>
using namespace std;

int getlength(char ch[100]){
    int length=0;
    int i=0;

    while(ch[i]!='\0'){
        length++;
        i++;

    }
    return length;

}

int main(){
    char ch[100];

    cout<<"Enter Your Name : "<<endl;
    // cin>>ch;
 
    // getline(cin,ch);

    cin.getline(ch,100);

    cout<<"Your Name Is : "<<ch<<endl;

    cout<<"Length is : "<<getlength(ch)<<endl;
    cout<<"Length is -> "<<strlen(ch);
}