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

void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

bool searchBSTrecursive(node* &root, int x){
    // base case
    if(root==NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data > x){
        return searchBSTrecursive(root->left , x);
    }else{
        return searchBSTrecursive(root->right , x);
    }
}
bool searchBSTiterative(node* root , int x){
    node* temp = root;
    while(temp!=NULL){
        if(temp->data == x){
            return true;
        }
        if(temp->data > x){
            temp = temp -> left;
        }
        else{
            temp = temp -> right;
        }
    }
    return false;
}
int main(){
    node* root = NULL;
    cout<<"START ENTERING DATA"<<endl;
    takeInput(root);
    int x;
    cout<<"ENTER VALUE TO SEARCH"<<endl;
    cin>>x;
    cout<<searchBSTiterative(root , x)<<endl;
    

    return 0;
}