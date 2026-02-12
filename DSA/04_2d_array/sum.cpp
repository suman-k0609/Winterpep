#include<iostream>
using namespace std;

//int maxrowsum(int arr[][4],int row,int col){
//	int maximum=INT_MIN;
//	int index=-1;
//	int sum=0;
//	for(int i=0;i<3;i++){
//		for(int j=0;j<4;j++){
//			sum+=arr[i][j];
//			}
//			if(sum>maximum){
//				maximum=sum;
//				index=i;
//			}
//	}
//	return index;
//}
int maxcolsum(int arr[3][3],int row,int col){
	 int sum=0;
    int idx=0;
    int maxs=INT_MIN;
	 for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
            if(sum>maxs){
            	maxs=sum;
            	idx=j;
            	
			}
        }
        cout<<sum<<endl;
		sum=0; 
    }
     return idx;
} 
int printwavymatrix(int arr[4][4],int row,int col){
	for(int j=0;j<4;j++){
		if(j%2==0){
			for(int i=0;i<4;i++){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
		else{
			for(int i=3;i>=0;i--){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	
	}
}
int main(){
    int n=3;
    int m=3;
   
//    int arr[3][3]={6,3,5,1,7,9,4,8,3};
//    cout<<maxcolsum(arr,3,3);
//   
int arr[4][4]={1,7,14,6,11,15,5,10,2,4,16,3,9,12,8,12};
printwavymatrix(arr,4,4);
}
