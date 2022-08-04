#include<iostream>

using namespace std;

class circularQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    circularQueue(int size){
        arr = new int[size];
        front=rear=-1;
    }
    void push(int d){
        if(front==0 && rear == size-1 || rear == (front-1)%(size-1)){
            cout<<"QUEUE IS FULL"<<endl;
        }else if(front==-1){
            front=rear=0;
            arr[rear] = d;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear] = d;
        }else{
            rear++;
            arr[rear] = d;
        }
    }
    void pop(){
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
    int qfront(){
        return arr[front];
    }
    bool isEmpty(){
        if(front==rear) return 1;
        else return 0;
    }
};

int main(){
    circularQueue q(5);
    q.push(1);
    cout<<q.qfront()<<endl;
    q.push(2);
    q.pop();
    cout<<q.qfront()<<endl;
    q.push(3);
    cout<<q.qfront()<<endl;
    q.push(4);
    cout<<q.qfront()<<endl;
    q.push(5);
    cout<<q.qfront()<<endl;
    return 0;
}