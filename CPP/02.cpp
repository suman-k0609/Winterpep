#include<iostream>
using namespace std;
//int main(){
//	int i=0;
//	for(int i = 0; i <3; i++)
//{
//	for(int j=0; j<3;j++){
//		cout<<i<<j<<endl;
//	}
//	}
//	cout<<i<<endl;
//}

//int main(){
//	for(int i=0;i<=4;i++){
//		for(int j=0;j<=3;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}

//int main(){
//	//whikle loop
//	int i=0;
//	while(i<10){
//		cout<<i<<" ";
//		i++;
//	}
//}
//example while loop

int main(){
	int pin=1234;
	int entercode=0;
	while(entercode!=pin){
		cout<<"Enter pin: ";
		cin>>entercode;
	}
	cout<<"Acess granted";
}

//int main(){
//	//do while
//	int i=0;
//	do{
//		cout<<i<<" ";
//		i++;
//	}while(i<10);
//	
//}
