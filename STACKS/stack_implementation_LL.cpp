// Using LL head is refered as top. 
// And both insertion and deletion is from head only as it takes O(1).
// if we do from end it will take O(n) complexity as random ascesss in not in LL we have to traverse it.
#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node* top = NULL;

    void push(int element){
        node* temp = new node();
        if(!temp){
            cout<<"STACK OVERFLOW"<<endl;
            return ;
        }
        else{
            temp->data = element; 
            temp->next = top;
            top = temp;
        }
    }
    void pop(){
        if(top==NULL){
            cout<<"STACK UNDERFLOW"<<endl;
        }
        else{
            node* temp;
            temp = top;
            top = top->next;
            free(temp);
        }
    }
    int peek(){
        if(top!=NULL)
        return top->data;
        else{
            cout<<"STACK IS EMPTY"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==NULL){
            return 1;
        }else{
            return 0;
        }
    }
};

int main(){
    node s;
    s.push(10);
    cout<<s.peek()<<endl;
    s.push(20);
    cout<<s.peek()<<endl;
    s.push(30);
    s.pop();
    cout<<s.peek()<<endl;
    return 0;
}