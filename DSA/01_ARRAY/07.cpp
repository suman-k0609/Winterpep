#include<iostream>
using namespace std;
int main(){
	
	int arr[5]={2,5,1,7,8};
//	for(int i=4;i>=0;i--){
//		cout<<arr[i];
//	}

 int i=0;
        int j=arr.size()-1;
        while(i<j){
            swap(arr[i++],arr[j--]);
            
        }
}
