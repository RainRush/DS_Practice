#include <iostream>
using namespace std;

main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b<c||a+c<b||b+c<a)
		cout<<0;
	else
		cout<<1;
}
