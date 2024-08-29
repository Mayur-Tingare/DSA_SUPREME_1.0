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

void inorder(Node *root){
    if(root==NULL){
        return;
    }

    inorder(root->left);

    cout<<root->data<<" ";

    inorder(root->right);



}

void preorder(Node *root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";

    preorder(root->left);

    preorder(root->right);


}

void postorder(Node *root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void levelordertraversal(Node *root){

    queue<Node*>q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //A
        Node *temp=q.front();
        //B
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        //C
        cout<<temp->data<<" ";
        //D
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    }
}

int height(Node *root){
    if(root==NULL){
        return 0;

    }

    int leftheight=height(root->left);
    int rightheight=height(root->right);
    int ans=max(leftheight,rightheight)+1;

    return ans;
}



int main()
{
    Node *root=NULL;
    root=Bulidtree();

    levelordertraversal(root);

    // inorder(root);

    // preorder(root);

    // postorder(root);

    cout<<"Height of tree is :"<<endl<<height(root)<<endl;


    






    return 0;
}