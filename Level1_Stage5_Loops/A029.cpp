#include <iostream>
using namespace std;

int fib(int n){
	if(n==1) return 1;
	else if(n==0) return 0;
	else return fib(n-1)+fib(n-2);
}

main(){
	int a;
	cin>>a;
	cout<<fib(a);
	return 0;
}

