#include<iostream>
using namespace std;
int printsum(int arr[],int size){
	if(size==1){
		return arr[0];
	}
	return arr[0]+printsum(arr+1,size-1);
}
int main(){
	int arr[5]={2,5,4,1,3};
	cout<<printsum(arr,5);
}
