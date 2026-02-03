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
void deleteAtend(Node* &head){
	Node* temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	Node *Lnode=temp->next;
	temp->next=NULL;
	delete(Lnode);
	cout<<endl;
}
void deleteAtbeg(Node* &head){
	Node*temp=head;
	head=head->next;
	delete(temp);
}
void insertAtposition(Node* &head,int val,int pos){
	Node* node=new Node(val);
	if(pos==1){
		node->next=head;
		head=node;
		return;
	}
	Node* temp=head;
	for(int i=1;i<pos-1 && temp->next!=NULL;i++){
		temp=temp->next;	
	}
	if(temp==NULL){
		return;
	}
	node->next=temp->next;
	temp=node;
}
void insertAtBegning(Node* &head,int val){
	Node* node=new Node(val);
	if(head==NULL){
		head=node;
		return;
	}
	node->next=head;
	head=node;
}

void insertAtEnd(Node* &head,int val){
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
//    Node* n1=new Node(1);
//    Node* n2=new Node(2);
//    n1->next=n2;
//    cout<<n1->data<<endl;

Node* head=NULL;
insertAtBegning(head,1);
insertAtEnd(head,2);
insertAtEnd(head,3);
insertAtEnd(head,4);

insertAtposition(head,100,3);

printLL(head);
deleteAtbeg(head);
deleteAtend(head);
printLL(head);
}
