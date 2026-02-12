#include<iostream>
using namespace std;
//void printheadr(int n){
//    if(n==0) return;
//    print(n-1);
//    cout<<n<<" ";
//}

void printeven(int n){
	n=n%2==0?n-2:n-1;
	if(n==0) return;
	printeven(n);
	cout<<n<<" ";
}

//void printtailr(int n){
//	if(n==0) return;
//    cout<<n<<" ";
//    print(n-1);
//}
int main(){
//    int n=10;
    int n=9;
//    printheadr(n);
//    printtailr(n);
printeven(n);
    return 0;
}
