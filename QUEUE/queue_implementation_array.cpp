#include<iostream>

using namespace std;

class queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(int size){
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int element){
        if(rear==size){
            cout<<"QUEUE IS FULL"<<endl;
        }else{
            arr[rear] = element;
            rear++;
        }
    }
    void pop(){
        if(front==rear){
            cout<<"QUEUE IS EMPTY"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear = 0;
            }
        }
    }
    int qfront(){
        if(rear == front){
            return -1;
        }else{
            return arr[front];
        }
    }
    bool isEmpty(){
        if(front==rear) return 1;
        else return 0;
    }
};

int main(){
    queue q(5);
    q.push(1);
    cout<<q.qfront()<<endl;
    q.push(2);
    cout<<q.qfront()<<endl;
    q.push(3);
    cout<<q.qfront()<<endl;
    q.push(4);
    q.pop();
    q.push(5);
    cout<<q.qfront()<<endl;
    return 0;
}