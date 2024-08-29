#include <bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node *left;
    Node*right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }



};

Node *insertintobst(Node *root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
        
    }

    if(root->data>data){
        root->left=insertintobst(root->left,data);
    }

    else{
        root->right=insertintobst(root->right,data);
    }
    
    return root;
}

void takeinput(Node *&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertintobst(root,data);
        cin>>data;
    }
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

void inorder(Node * root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}

void postorder(Node * root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    

}

void preorder(Node * root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    

}


int main()
{
    Node *root=NULL;
    cout<<"Enter the data :"<<endl;
    takeinput(root);
    cout<<"Printing levelorder traversal :"<<endl;
    levelordertraversal(root);
    cout<<endl;


    cout<<"Printing inorder traversal :"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Printing preorder traversal :"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Printing postorder traversal :"<<endl;
    postorder(root);
    cout<<endl;




    return 0;
}