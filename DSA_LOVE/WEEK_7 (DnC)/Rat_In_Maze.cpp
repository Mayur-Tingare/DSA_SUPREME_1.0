#include <bits/stdc++.h>
using namespace std;

bool issafe(int rows,int cols,int i,int j,int arr[][4],vector<vector<bool>>&visited){
    if(((i>=0 && i<rows)&&(j>=0 && j<cols )) && (arr[i][j]==1) && (visited [i][j]==false)){
        return true;
    }
    else{
        return false;
    }
    
}

// Always remember in case of pass by reference only we have to do backtracking

void solve(int arr[][4],int rows,int cols,int i,int j,vector<vector<bool>>&visited,vector<string>&path,string output){
    if(i==rows-1 && j==cols-1){
        path.push_back(output);
        return;
    }
    // down
    

    if(issafe(rows,cols,i+1,j,arr,visited)){
        visited[i+1][j]=true;
        solve(arr,rows,cols,i+1,j,visited,path,output+'D');
        visited[i+1][j]=false;

    }


    // left
    if(issafe(rows,cols,i,j-1,arr,visited)){
        visited[i][j-1]=true;
        solve(arr,rows,cols,i,j-1,visited,path,output+'L');
        visited[i][j-1]=false;

    }

    // right
    if(issafe(rows,cols,i,j+1,arr,visited)){
        visited[i][j+1]=true;
        solve(arr,rows,cols,i,j+1,visited,path,output+'R');
        visited[i][j+1]=false;

    }

    // Up
    if(issafe(rows,cols,i-1,j,arr,visited)){
        visited[i-1][j]=true;
        solve(arr,rows,cols,i-1,j,visited,path,output+'U');
        visited[i-1][j]=false;

    }


}

int main()
{
    int arr[4][4]={{1,0,0,0}, 
                   {1,1,0,1},
                   {1,1,0,0},
                   {0,1,1,1}};
    
    int rows=4;
    int cols=4;
    vector<string>path;


    vector<vector<bool>>visited(rows,vector<bool>(cols,false));
    visited[0][0]=true;

    string output="";
    solve(arr,rows,cols,0,0,visited,path,output);
    cout<<"Results are :"<<endl;
    for(auto i:path){
        cout<<i<<" ";
    }

    if(path.size()==0){
        cout<<"No path "<<endl;

    }
    return 0;
}