#include <iostream>
using namespace std;

main(){
	int a,b,c,d,temp;
	cin>>a>>b>>c>>d;
	if(a==c&&b==d)
		cout<<0;
	else if(a==c&&b!=d){
		if(b>d)
			cout<<b-d;
		else
			cout<<d-b;
	}
	else if(a!=c&&b==d){
		if(a>c)
			cout<<a-c;
		else
			cout<<c-a;
	}
	else{
		if(c>a){
			temp = a;
			a = c;
			c = temp;
		}
		if(d>b){
			temp = b;
			b = d;
			d = temp;
		}
	
		cout<<2*((a-c)+(b-d));	
	}
}
