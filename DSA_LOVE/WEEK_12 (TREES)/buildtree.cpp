#include <bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node*left;
    Node *right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }

};





int findpos(int in[],int n,int element){
        for(int i=0;i<n;i++){
            if(in[i]==element){
                return i;
            }
        }
        return -1;
    }
    
    // Node* buildtree(int in[],int pre[],int n,int &preindex,int instartindex,int inendindex){
        
    //     // base case
    //     if(preindex >=n || (instartindex>inendindex)){
    //         return NULL;
    //     }
        
    //     int element=pre[preindex++];
        
    //     Node *root=new Node(element);
        
    //     int pos=findpos(in,n,element);
        
    //     root->left=buildtree(in,pre,n,preindex,instartindex,pos-1);
    //     root->right=buildtree(in,pre,n,preindex,pos+1,inendindex);
        
    //     return root;
        
        
        
        
    // }

    


    Node *buildtree(int in[],int post[],int n,int &postindex,int instartindex,int inendindex){
        if(postindex<0 || instartindex>inendindex){
            return NULL;
        }

        int element=post[postindex--];
        Node *root=new Node(element);
        int pos=findpos(in,n,element);

        root->right= buildtree(in,post,n,postindex,pos+1,inendindex);
        root->left=buildtree(in,post,n,postindex,instartindex,pos-1);

        return root;



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
    
    
    
    int main()
    {
        // Code here

        int in[]={40,20,10,50,30,60};
        int post[]={40,20,50,60,30,10};
        int n=6;
        int postindex=5;
        int instartindex=0;
        int inendindex=n-1;
        
        
        Node *root=buildtree(in,post,n,postindex,instartindex,inendindex);

        levelordertraversal(root);



        
    }