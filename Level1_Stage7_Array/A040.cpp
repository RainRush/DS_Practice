#include <iostream>
using namespace std;

int fib(int n){
	if(n==0||n==1) return 1;
	else return fib(n-1)+fib(n-2);
}

main(){
	//print from f(n) to f(0)
	int n;
	cin>>n;
	for(int i=n;i>=0;i--)
		cout<<"fib("<<i<<") = "<<fib(i)<<endl;
}
