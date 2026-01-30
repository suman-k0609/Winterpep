#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return 1;
    }
    return linearsearch(arr+1,size-1,key);
}
int main(){
    int arr[5]={2,4,6,1,9};
    int key=5;
    cout<<linearsearch(arr,5,key);
}

