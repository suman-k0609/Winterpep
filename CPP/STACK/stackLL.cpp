#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;

    }
};
class Mystack{
    public:
    Node* top;
    Mystack(){
        top=NULL;
    }
    void push(int val){
        Node* node=new Node(val);
        node->next=top;
        top=node;
    }
    void pop(){
        if(top==NULL){
            cout<<"stack underflow"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }
    int peek(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        return top==NULL;
    }
};
int main()
{

}