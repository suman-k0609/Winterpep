#include<iostream>
using namespace std;
class Myqueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    Myqueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int val){
        if(rear==size-1){
            cout<<"queue overflow";
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;
    }
    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"stack underflow"<<endl;
            return;
        }
        front++;
    }
    //get the front element of queue;
    int peek(){
        if(front==-1 || front>rear){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
}
int main(){

}