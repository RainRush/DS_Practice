#include <iostream>
using namespace std;

main(){
	int a,b,c,d,temp;
	cin>>a>>b>>c>>d;
	if(a==c||b==d){
		cout<<0;
	}
	else{
		if(a<c){
			temp = a;
			a = c;
			c = temp;
		}
		if(b<d){
			temp = b;
			b = d;
			d = temp;
		}
		cout<<(a-c)*(b-d);
	}
}
