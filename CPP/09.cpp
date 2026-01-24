//linear search
#include<iostream>
using namespace std;
int LinearSearch(int arr[],int key){
	for(int i=0;i<=5;i++){
		if(arr[i]==key && key>5){
			return key*2;
		}
		else if(arr[i]==key && key<5){
			return key/2;
		}
	}
	return -1;
}
int main(){
	int arr[5]={3,16,4,1,2};
	int key=16;
	cout<<LinearSearch(arr,key);
	
}
