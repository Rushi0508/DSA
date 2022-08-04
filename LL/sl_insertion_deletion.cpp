#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};


void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}


void insertAtPosition(node* &tail,node* &head,int position, int d){
    if(position == 1){
        insertAtHead(head,d);
        return ;
    }
    node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    //when inserting at end
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d which is to insert
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(node* &head,node* &tail,int position){
    if(position==1){
        node* temp=head;
        head=head->next;
        temp -> next=NULL;
        free(temp);
    }
    else{
        node* curr = head;
        node* prev = NULL;
        
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count ++;
        }
        if(curr->next==NULL){
            prev->next = curr->next;
            tail=prev;
        }
        else{
             prev->next = curr->next;
        }
       
        curr->next = NULL;
        free(curr);
    }
}
void print(node * &head){
    node* temp = head;
     
    while((temp)!=NULL){
        cout<<temp-> data<<" ";
        temp = temp->next;
    } 
    cout<<endl;
}

int main(){

    // created node
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
    insertAtPosition(tail,head, 4,30);
    print(head);
    cout<<"DELETING NODE AT ANY POSITION"<<endl;
    deleteNode(head,tail,1);
    print(head);
   return 0;
}