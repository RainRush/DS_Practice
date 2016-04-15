#include <iostream>
using namespace std;

double a(double n){
	if(n==1) return 3;
	else return (4*a(n-1)+1)/5;
}

main(){
	double n;
	cin>>n;
	cout<<a(n);
}
