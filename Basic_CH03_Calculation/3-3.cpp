#include <iostream>
using namespace std;

main(){
	int n,a,b,c,d;
	cin>>n;
	d=n%10;
	c=(n%100)/10;
	b=(n%1000)/100;
	a=n/1000;
	cout<<a+b+c+d;
}
