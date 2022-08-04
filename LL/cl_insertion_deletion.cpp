#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this-> data = d;
        this->next = NULL;
    }
};

void insertNode(node* &tail, int element, int d){
    if(tail==NULL){
        node* temp = new node(d);
        tail = temp;
        temp->next = temp;
    }
    else{
        node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        node* temp = new node(d);
        
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(node* &tail, int d){
    node* prev = tail;
    node* curr = prev->next;
    while(curr->data!=d){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    if(tail==curr){
        tail = prev;
    }
    curr->next = NULL;
    free(curr);
}

void print(node* &tail){
    node* temp = tail;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=tail);
    cout<<endl;
}

int main(){
    node * tail = NULL;
    insertNode(tail,5,2);
    cout<<"CURRENT TAIL"<<endl;
    print(tail);
    cout<<"INSERTING 10 AFTER VALUE 2"<<endl;
    insertNode(tail,2,10);
    print(tail);
    cout<<"INSERTING 20 AFTER VALUE 10"<<endl;
    insertNode(tail,10,20);
    print(tail);
    cout<<"INSERTING 8 AFTER VALUE 2"<<endl;
    insertNode(tail,2,8);
    print(tail);
    cout<<"DELETING NODE OF ANY VALUE"<<endl;
    deleteNode(tail,8);
    print(tail);

    return 0;
}