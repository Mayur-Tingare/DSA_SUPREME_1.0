#include <bits/stdc++.h>
using namespace std;

class Node{
public:

    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
        
    }




};

Node* Bulidtree(){
    int data;

    cout<<"Enter the data"<<endl;
    cin>>data;

    // if NULL
    if(data==-1){
        return NULL;
    }

    // else A,B and C steps krlo

    //A
    Node *root=new Node(data);

    //B
 
    cout<<"Enter the data to insert at left of "<<data<<" Node"<<endl;

    root->left=Bulidtree();

    //C 

    cout<<"Enter the data to insert at Right of "<<data<<" Node"<<endl;

    root->right=Bulidtree();


    return root;



}

void topview(Node*root){
    if(root==NULL){
        return;
    }
    map<int,int>topnode;

    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int>temp=q.front();
        q.pop();

        Node*frontnode=temp.first;
        int hd=temp.second;




        if(topnode.find(hd) == topnode.end()){
            topnode[hd]=frontnode->data;
        }

        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));

        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }



    }

    cout<<"Printing the Top View :"<<endl;

    for(auto i:topnode){
        cout<<i.first<<"->"<<i.second<<endl;

    }
}

void bottomview(Node*root){
    if(root==NULL){
        return;
    }
    map<int,int>topnode;

    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int>temp=q.front();
        q.pop();

        Node*frontnode=temp.first;
        int hd=temp.second;




        // just create dont dheck i.e. update
            topnode[hd]=frontnode->data;
        

        if(frontnode->left){
            q.push(make_pair(frontnode->left,hd-1));

        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,hd+1));
        }



    }

    cout<<"Printing the Top View :"<<endl;

    for(auto i:topnode){
        cout<<i.first<<"->"<<i.second<<endl;

    }
}

void leftview(Node *root,vector<int>&ans,int level){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }

    // left call
    leftview(root->left,ans,level+1);

    // right call
    leftview(root->right,ans,level+1);


}

void rightview(Node *root,vector<int>&ans,int level){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }

    // right call
    rightview(root->right,ans,level+1);

    // left call
    rightview(root->left,ans,level+1);

    


}


int main()
{
    Node *root=NULL;
    root=Bulidtree();

    // topview(root);

    // bottomview(root);

    vector<int>ans;
    int level=0;

    rightview(root,ans,level);

    cout<<"Printing the Right view :"<<endl;


    for(auto it:ans){
        cout<<it<<" ";
    }




    






    return 0;
}