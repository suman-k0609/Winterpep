#include<iostream>
using namespace std;
int calfactorial(int n){
	if(n==0 || n==1) return 1;
	return n*calfactorial(n-1);
}

int calculatepower(int x,int n)
{
	if(n==0) return 1;
	return x*calculatepower(x,n-1);
}

int fibnocci(int n){

if(n==0) return 0;
if(n==1) return 1;
return fibnocci(n-1)+fibnocci(n-2);
}
int main(){
//	int n=5;
//	cout<<calfactorial(n);
//int n=3;
//int x=2;
//cout<<calculatepower(x,n);

int n=5;
cout<<fibnocci(n);

	
}
