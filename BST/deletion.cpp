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

node* minVal(node* root){
    node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

node* deleteFromBST(node* root, int t){
    // Base condition
    if(root == NULL){
        return NULL;
    }
    if(root->data == t){
        // 0 child
        if(root->right==NULL && root->left==NULL){
            delete root;
            return NULL;
        }

        // 1 child
        //left
        if(root->left!=NULL && root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }

        //right
        if(root->left==NULL && root->right!=NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        //either replace it with left's max or righ's min
        if(root->left!=NULL && root->right!=NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if(root->data>t){
        root->left = deleteFromBST(root->left, t);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, t);
        return root;
    }
}
    node* findLastRight(node* root) {
        if (root->right == NULL) {
            return root;
        }
        return findLastRight(root->right);
    }

int main(){
    node* root = NULL;
    cout<<"START ENTERING DATA"<<endl;
    takeInput(root);
    cout<<"HERE IS YOUR BST"<<endl;
    levelOrderTraversal(root);
    cout<<"Enter data to delete"<<endl;
    int t;
    cin>>t;
    deleteFromBST(root , t);
    cout<<"HERE IS YOUR BST after deleting"<<t<<endl;
    levelOrderTraversal(root);

    return 0;
}