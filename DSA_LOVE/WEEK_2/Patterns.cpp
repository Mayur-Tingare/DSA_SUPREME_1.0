#include <bits/stdc++.h>
using namespace std;
int main(){
    // int bro;
    // cout<<"Enter Bro's"<<endl;
    // cin>>bro;
    // if(bro==0){
    //     cout<<"Bat Ban jaegi"<<endl;
    // }
    // else{
    //     cout<<"Bat na Banegi"<<endl;
        
    // }
    
    // for (int i=0;i<5;i++){
    //     cout<<"Love Babbar"<<endl;
        
    // }
    
    // for(int i=0;i<5;i++){
    //     cout<<i<<endl;
        
    // }
    
    // for (int i=1;i<=10;i++){
    //     cout<<i*2<<endl;
        
    // }
    
    // for (int i=100;i>0;i=i/2 ){
    //     cout<<i<<endl;
        
    // }
    
    // for (int i=0;(i>=0 && i<=1 0);i=i+1){
    //     cout<<i<<endl;
    // }
    
    // int n;
    //  if(cin>>n){
    //      cout<<"Babbar"<<endl;    
    // }
    
    // if(cout<<"Babbar"){
    //     cout<<"Babbar"<<endl;
    // }
    
    
    
    // PATTERNS
    
    // Rows first then column formula :
    
    // 1.Solid Rectangle
    
    // Outer loop : Rows
    
    // for (int row=0;row<3;row++){
    //     // Inner Loop : Columns
    //     for(int col=0;col<5;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    
    
    // 2. Solid Square
    
    // int n;
    // cin>>n;
    
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    // 3.Hollow Rectangle
    
    
    // int rows,cols;
    // cin>>rows;
    // cin>>cols;
    
    // for (int row=0;row<rows;row++){
        
    //     // As this is same processs so to group this we have made it in single way
    //     if(row==0 || row==rows-1)
    //     for(int col=0;col<cols;col++){
    //         cout<<"* ";
    //     }
    //     else {
    //         cout<<"* ";
    //         for(int i=0;i<cols-2;i++){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    
    
    // 4.half Pyramid
    
    
    // int n;
    // cin>>n;
    // cout<<endl<<endl;
    
    
    // for(int row=0;row<n;row++){
    //     for (int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 5.Inverted Half Pyramid;
    
    
    // int n;
    // cin>>n;
    // cout<<endl<<endl;
    
    //  for(int row=0;row<n;row++){
    //      for(int col=0;col<n-row;col++){
    //          cout<<"*    ";
    //      }
    //      cout<<endl;
         
    //  }
    
    
    // 6.Numeric Half Pyramid
    
    
    // int n;
    // cin>>n;
    // cout<<endl<<endl;
    
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    
    // 7.Inverted Numeric Half Pyramid
    
    
    // int n;
    // cin>>n;
    // cout<<endl<<endl;
    
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 8.Full Pyramid
    
    
    // int n;
    // cin>>n;
    
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 9.inverted Pyramid
    
    
    // int n;
    // cin>>n;
    
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    
    
    // 10.Solid Pyramid
    
    
    
    //   int n;
    // cin>>n;
    
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    
    
    // 11.Hollow diamond :
    
    
    // int n;
    // cin>>n;
    
    // first part
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<2*row+1;col++){
    //         if(col == 0 || col==2*row){
    //             cout<<"*";
    //         }
            
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
        
    // }
     
    // Second part
    
    // for(int row=0;row<n;row++){
        
        //space 
        
        // for(int col=0;col<row;col++){
        //     cout<<" ";
        // }
        
        // star 
        
    //     for(int col=0;col<2*n-2*row-1;col++){
    //         if(col ==0 || col==2*n-2*row-2){
    //             cout<<"*";
    //         }
    //         else {
    //             cout<<" ";
    //         }
           
            
    //     }
    //     cout<<endl;
        
    // }
    
    
    // 12.Flipped solid diamond
    
    
    // int n;
    // cin>>n;
    
    
    
    
    // for (int row=0;row<n;row++){
        
    //     // half pyramid
        
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
        
        
    
    
    // // space wala full pyramid
    
    // for(int col=0;col<2*row+1;col++){
    //     cout<<" ";
    // }

    // // half pyramid 
    // for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    
    // }
    
    // // second part
    
    // for (int row=0;row<n;row++){
    //     //half pyramid
        
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
        
    //     // space wala iverted pyramid
        
    //     for(int col=0;col<2*n-2*row-1;col++){
    //     cout<<" ";
    // }

    // // half pyramid 
    // for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    
    // }
        
    
    // Home Work on the spot


    // Fancy Pattern #1
    
    // int n;
    // cin>>n;
    // cout<<endl;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<row+1;
    //         if(col!= row)  // as we are starting from 0 so last number goes to n-1 and here in above line last n is row+1 in for loop always last number is there  
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
        
    // }

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<n-row;
        
    //     if(col !=n-row-1){
    //         cout<<"*";
    //     }
    //     }
    //     cout<<endl;

    // }


    // Fancy Pattern #2


    // int n;
    // cin>>n;
    // cout<<endl;

    // for(int row=0;row<n;row++){
    //     int col;
    //     for(col=0;col<row+1;col++){
    //         int ans=col+1;
    //         char ch= ans + 'A' -1;
    //         cout<<ch;
    //     }
        

        // reverse counting
        // for(col=col-1;col>=1;col--){
        //     int ans=col;
        //     char ch=ans+'A'-1;
        //     cout<<ch;
        // }


    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    
    // for(int row=0;row<n;row++){

    //     // row+1 elements
    //     int start=row+1;
    //     for(int col=0;col<row+1;col++){
    //         cout<<start<<" ";
    //         start=start+1;

    //     }
    //     cout<<endl;
    // }
     

    // Numeric full pyramid

    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++){

    //     // Spaces
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }

    //     // numbers

    //     for(int col=0;col<row+1;col++){
    //         cout<<row+col+1;
    //     }

    //     // reverse counting
    //     int start=2*row;
    //     for(int col=0;col<row;col++){
    //         cout<<start;
    //         start--;
    //     }
        
    //     cout<<endl;


    // }

    
    // numeric hollow pattern


    int n;
    cin>>n;

    for(int row=0;row<n;row++){
            //spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }

        // numbers and spaces in  between
        int start=1;
        for(int col=0;col<2*row+1;col++){
            // first and last row
            
            if(row == 0 || row==n-1){
                //even
                if(col %2 ==0){
                    cout<<start;
                    start=start+1;

                }
                else{
                    // odd
                    cout<<" ";
                }
            }
            else{
                if (col==0){
                    cout<<1;

                }
                else if(col== 2*row){
                    cout<<row+1;
                }
                else{
                    cout<<" ";
                }
            }

        }
        cout<<endl;


        
    }




    
    
    return 0;
}
