// INORDER HAS NODE IN MIDDLE
// i.e left NODE right

// PREORDER HAS NODE AT RIGHT
// i.e NODE left right

// POSTORDER HAS NODE AT LEFT
// i.e left right NODE

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
        this->right= NULL;
    }
};

node* buildTree(node* root){
    cout<<"ENTER data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1) return NULL;
    cout<<"ENTER left data for "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"ENTER right data for "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

node* levelOrder(node* root){
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
            cout<<temp -> data<< " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

node* inOrder(node* root){
    if(root == NULL){
        return 0;
    }
   
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);

}
node* preOrder(node* root){
    if(root == NULL){
        return 0;
    }
    
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    
}
node* postOrder(node* root){
    if(root == NULL){
        return 0;
    }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
}

int main(){
    node* root = NULL;

    //Building Tree
    //1 2 3 4 -1 -1 5 -1 -1 6 -1 -1 7 -1 -1
    root = buildTree(root);
    cout<<"PRINTING LEVEL ORDER TREE"<<endl;
    levelOrder(root);
    cout<<"PRINTING INORDER TREE"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"PRINTING PREORDER TREE"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"PRINTING POSTORDER ORDER TREE"<<endl;
    postOrder(root);
    return 0;
}