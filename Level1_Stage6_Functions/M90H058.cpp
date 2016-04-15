#include <iostream>
using namespace std;

double a(double n){
	if(n==1) return 1;
	else {
		return (n)/(n+1)*a(n-1);
	}
}

main(){
	//a(n) = n/(n+1)*a(n-1), a(1)=1 
	double n;
	cin>>n;
	cout<<a(n);
}
