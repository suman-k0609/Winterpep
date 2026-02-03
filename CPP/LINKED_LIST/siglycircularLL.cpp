#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int val){
			data=val;
			next=NULL;
		}
};
void insertatend(Node* &head,int val){
	Node* node=new Node(val);
	if(head==NULL){
		head=node;
		node->next=head;
		return;
	}
	Node* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	node->next=head;
	temp->next=node;
}
void insertatbeg(Node* &head,int val){
	Node* node=new Node(val);
	if(head==NULL){
		head=node;
		node->next=head;
		return;
	}
	Node* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=node;
	node->next=head;
	head=node;
}
void printLL(Node* head){
	Node* temp=head;
	
//	cout<<temp->data<<" ";
//	temp=temp->next;
//	while(temp!=head){
//		cout<<temp->data<<"->";
//		temp=temp->next;
//	}
do{
	cout<<temp->data<<"->";
		temp=temp->next;
		
}while(temp!=head);
	cout<<"NULL";
}
int main(){
	Node* head=NULL;
	insertatbeg(head,1);
	insertatend(head,2);
	printLL(head);
}
