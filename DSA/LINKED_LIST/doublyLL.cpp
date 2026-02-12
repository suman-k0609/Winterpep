#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node* prev;
	Node(int val){
		data=val;
		prev=NULL;
		next=NULL;
	}
};
void insertatend(Node* &head,int val){
	Node* node=new Node(val);
	if(head==NULL){
		head=node;
		return;
	}
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=node;
	node->prev=temp;
}
void insertatbeg(Node* &head,int val){
	Node* node=new Node(val);
	if(head==NULL){
		head=node;
		return;
	}
	head->prev=node;
	node->next=head;
	head=node;
}
void printLL(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL";
}
int main(){
	Node * head=NULL;
	insertatbeg(head,1);
	insertatbeg(head,2);
	insertatend(head,3);
	printLL(head);
}
