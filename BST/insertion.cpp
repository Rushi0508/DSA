/*The values of left sub tree must be smaller than root node and values of right sub tree 
must be greater than root node */

/* In a Binary search tree, the value of left node must be smaller than the parent node, and the value of right node must be greater than the parent node*/

#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertIntoBST(node* root, int d){
    if(root==NULL){
        root = new node(d);
        return root;
    }
    if(d > root->data){
        root->right = insertIntoBST(root->right,d);
    }
    if(d < root->data){
        root->left = insertIntoBST(root->left , d);
    }
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}
int main(){
    node* root = NULL;
    cout<<"START ENTERING DATA"<<endl;
    takeInput(root);
    cout<<"HERE IS YOUR BST"<<endl;
    levelOrderTraversal(root);

    return 0;
}