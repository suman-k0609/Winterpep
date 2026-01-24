#include<iostream>
using namespace std;
int BinerySearch(int arr[],int key,int size){
	int start=0;
	int end=size-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[5]={4,3,7,8,2};
	int key=8;
	cout<<BinerySearch(arr,key,5);
}
