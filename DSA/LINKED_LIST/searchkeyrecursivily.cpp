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
bool searchkey(Node* head,int key){
	if(head==NULL) return false;
	if(head->data==key) return true;
	return searchkey(head->next,key);
}
int main(){
	
	Node* n1=new Node(33);
	Node* n2=new Node(30);
	Node* n3=new Node(22);
	Node* n4=new Node(37);
	int key=50;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	cout<<searchkey(n1,key);

}

