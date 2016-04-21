#include <iostream>
using namespace std;

main(){
	int a,b,c,a2,b2,c2;
	cin>>a>>b>>c;
	if(a+b<c||a+c<b||b+c<a){
		cout<<0;
	}
	else{
		a2 = a*a;
		b2 = b*b;
		c2 = c*c;
		if(a2+b2==c2||a2+c2==b2||b2+c2==a2)
			cout<<3;
		else if(a2+b2<c2||a2+c2<b2||b2+c2<a2)
			cout<<2;
		else
			cout<<1;
	}
}
