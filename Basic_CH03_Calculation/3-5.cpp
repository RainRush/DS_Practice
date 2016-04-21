#include <iostream>
using namespace std;

main(){
	int n,a,b,c,d;
	cin>>n;
	while(n<0||n>100){
		cout<<"Enter a number between 0-100";
		cin>>n;
	}
	a=n/50;
	b=(n-50*a)/10;
	c=(n-50*a-10*b)/5;
	d=n-50*a-10*b-5*c;
	cout<<"$50: "<<a<<endl<<"$10: "<<b<<endl<<"$5 : "<<c<<endl<<"$1 : "<<d;
}
