#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(node* &tail, node* &head,int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    node* temp = head;
    int count=1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(node* &head, node* &tail, int position){
    if(position == 1){
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        free(temp);
    }
    else{
        int count=1;
        node* curr = head;
        node* prev = NULL;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        if(curr->next == NULL){
            prev->next = curr->next;
            tail=prev;
        }
        else{
            curr->prev = NULL;
            prev->next = curr->next;
            curr->next->prev = prev;
            curr->next = NULL;
            free(curr);
        }
    }
}

void print(node* head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    node* node1 = new node(10);
    cout<<"CURRENT HEAD"<<endl;
    node* head = node1;
    node* tail = node1;
    print(head);
    cout<<"INSERTING 12 AT HEAD"<<endl;
    insertAtHead(head, 12);
    print(head);
    cout<<"INSERTING 16 AT TAIL"<<endl;
    insertAtTail(tail, 16);
    print(head);
    cout<<"INSERTING 30 AT any Position"<<endl;
    insertAtPosition(tail,head, 3,30);
    print(head);
    cout<<"DELETING NODE AT ANY POSITION"<<endl;
    deleteNode(head,tail,2);
    print(head);
    return 0;
}