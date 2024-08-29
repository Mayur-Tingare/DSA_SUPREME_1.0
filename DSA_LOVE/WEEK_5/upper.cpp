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

void lower(char ch[100]){
    int start=0;
    int n=getlength(ch);

    for(int i=0;i<n;i++){
        

         if(ch[i]>='A'&&ch[i]<='Z'&&ch[i]!=' '){

            // ch[i]=ch[i]-32;
        ch[i]=ch[i]-'A'+'a';
         }
    }

    
}

void upper(char ch[100]){
    int start=0;
    int n=getlength(ch);

    for(int i=0;i<n;i++){
        if(ch[i]>='a'&&ch[i]<='z'){
        // ch[i]=ch[i]-32;

        ch[i]=ch[i]-'a'+'A';
        }
    }

    
}

int main(){
    char ch[100];

    cout<<"Enter Your Name : "<<endl;
    // cin>>ch;
 
    // getline(cin,ch);
    cin.getline(ch,50);

    cout<<"Your Name Is : "<<ch<<endl;
    // upper(ch);
    // cout<<"Your Name in upper chars is : "<<ch;
    lower(ch);
    cout<<"Your Name in lower chars is : "<<ch;
}