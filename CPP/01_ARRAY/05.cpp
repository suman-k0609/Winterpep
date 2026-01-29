#include<iostream>
using namespace std;
void increment(int &x){ //int x
	x++;
	cout<<"inside function: "<<x<<endl;
}
int main(){
//	int age=5;
//	increment(age);
//	cout<<"main function: "<<age<<endl;
//int a=5;
//int *ptr=&a;
//cout<<ptr<<endl;
//cout<<*ptr<<endl;

//int x=10;
//int *p=&x;
//*p=20;

//int x=10;
//int &r=x;
//r++;
//cout<<x;

int x=6;
int *p=&x;
cout<<x<<endl;
*p=9;
cout<<x;


}
