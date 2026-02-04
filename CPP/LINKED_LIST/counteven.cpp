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
void counteven(Node* head){
	int count=0;
	
	Node* temp=head;
	while(temp!=NULL){
		
		if(temp->data%2==0){
			count++;
		}
		temp=temp->next;
	}
	cout<<count;
}
int main(){
	
	Node* n1=new Node(33);
	Node* n2=new Node(30);
	Node* n3=new Node(22);
	Node* n4=new Node(37);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	counteven(n1);
}

