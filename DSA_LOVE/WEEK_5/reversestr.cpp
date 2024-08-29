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

void reverse(char ch[100]){
    int start=0;
    int end=getlength(ch)-1;

    while(start<=end){
        swap(ch[start],ch[end]);
        start++;
        end--;

    }

    
}

int main(){
    char ch[100];

    cout<<"Enter Your Name : "<<endl;
    // cin>>ch;
 
    // getline(cin,ch);
    cin.getline(ch,50);

    cout<<"Your Name Is : "<<ch<<endl;
    reverse(ch);
    cout<<"Your reversed Name is : "<<ch;
}