#include<iostream>
using namespace std;

class deque{
    public:
    int front;
    int rear;
    int size;
    int *arr;

    deque(int s){
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool push_front(int d){
        if(front==0 && rear == size-1 || rear == (front-1)%(size-1)){
            cout<<"FULL"<<endl;
            return 0;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front==0 && rear!=size-1){
            front=size-1;
        }else{
            front--;
        }
        arr[front] = d;
        return 1;
    }
    bool push_back(int d){
        if(front==0 && rear == size-1 || rear == (front-1)%(size-1)){
            cout<<"FULL"<<endl;
            return 0;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear] = d;
        return 1;
    }
    void pop_front(){
        if(front==-1){
            cout<<"QUEUE IS EMPTY"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=rear=-1;
        }
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void pop_back(){
        if(front==-1){
            cout<<"QUEUE IS EMPTY"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=rear=-1;
        }
        else if(rear==0){
            rear = size-1;
        }
        else{
            rear--;
        }
    }
    int qfront(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }
    int qback(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[rear];
        }
    }
    bool isEmpty(){
        if(front==-1) return 1;
        else return 0;
    }
};

int main(){
    deque dq(5);
    dq.push_front(1);
    cout<<dq.qfront()<<" "<<dq.qback()<<endl;
    dq.push_front(2);
    cout<<dq.qfront()<<" "<<dq.qback()<<endl;
    dq.push_back(3);
    cout<<dq.qfront()<<" "<<dq.qback()<<endl;
    dq.pop_front();
    cout<<dq.qfront()<<" "<<dq.qback()<<endl;
    
    return 0;
}