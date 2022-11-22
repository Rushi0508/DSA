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
    node* curr = root;
    node* prev = NULL;
    while(curr!=NULL && curr->data!=t){
        prev = curr;
        if(curr->data>t){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
        
    }
    if(curr==NULL){
        return new node(-1);
    }
    // 0 child -> simply remove
    if(curr->left==NULL && curr->right==NULL){
        if(prev->right==curr){
            prev->right = NULL;
            free(curr);
        }
        else if(prev->left==curr){
            prev->left= NULL;
            free(curr);
        }
        return root;
    }

    // 1 child Left
    if(curr->left!=NULL && curr->right==NULL){
        if(prev->right==curr){
            prev->right = curr->left;
            free(curr);
        }
        else if(prev->left==curr){
            prev->left= curr->left;
            free(curr);
        }
        return root;
    }
    // 1 child Right
    if(curr->left==NULL && curr->right!=NULL){
        if(prev->right==curr){
            prev->right = curr->right;
            free(curr);
        }
        else if(prev->left==curr){
            prev->left= curr->right;
            free(curr);
        }
        return root;
    }

    // 2 child
    if(curr->left!=NULL && curr->right!=NULL){

        node* temp = curr->right;
        node* p=NULL;
        while(temp->left!=NULL){
            p = temp;
            temp = temp->left;
        }
        curr->data = temp->data;
        if(p!=NULL){
            p->left= NULL;
        }
        
        free(temp);
        return root;
    }
    return NULL;
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