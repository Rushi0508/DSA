#include<iostream>

using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"STACK OVERFLOW"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"STACK IS EMPTY"<<endl;
            return -1;
        }
    }
    int peep(){
        if(top>=0){
            return arr[0];
        }
        else{
            cout<<"STACK IS EMPTY"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return 1;
        }else{
            return 0;
        }
    }
};

int main(){
    stack s(5);
    s.push(10);      
    s.push(20);      
    s.push(30);   
    s.push(30);   
    s.push(30);  

    // cout<<s.peek()<<endl;
    // s.pop();   
    // cout<<s.peek()<<endl;
    // s.pop();   
    // cout<<s.peek()<<endl;
    // s.pop();
    // cout<<s.peek()<<endl;
    // if(s.isEmpty()){
    //     cout<<"EMPTY";
    // }
    return 0;
}