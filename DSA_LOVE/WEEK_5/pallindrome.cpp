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

bool pallindrome(char ch[]){
    int start=0;
    int end=getlength(ch)-1;
    

    while(start<=end){
        if(ch[start]!=ch[end]){
        
        return false;
        

        }
        else{
            start++;
            end--;
        }
        

    }
    return true;

    
}

int main(){
    char ch[100];

    cout<<"Enter Your Name : "<<endl;
    // cin>>ch;
 
    // getline(cin,ch);
    cin.getline(ch,50);

    cout<<"Your Name Is : "<<ch<<endl;
   
    
    if( pallindrome(ch)){
        cout<<"Is Pallindrome !"<<endl;
    }
    else{
        cout<<"Is not a pallindrome !"<<endl;
    }
    
}