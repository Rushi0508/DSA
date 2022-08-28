// Non- Linear data structure
// One node is connected to multiple nodes.

// Basic Terminologies:
// 1) TREE: Tree is a collection of entities called Nodes.
// 2) NODE: Each node consists data or value.
// 3) ROOT: First node of tree is called Root.
// 4) PARENT: Node which has branches.
// 5) CHILD: Nodes which are derived from parent.
// 6) SIBLING: Nodes having same parent.
// 7) ANCESTOR: Every node which has branches.
// 8) DECENDENT: Lower level nodes of Ancestors.
// 9) LEAF: Node which has no child.

// Binary tree has two children.

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

int main(){
    node* root = NULL;

    //Building Tree
    root = buildTree(root);
    cout<<"PRINTING TREE"<<endl;
    levelOrder(root);
    return 0;
}