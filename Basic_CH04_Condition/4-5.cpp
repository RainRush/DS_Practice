#include <iostream>
using namespace std;

main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(b*b-4*a*c==0)
		cout<<0;
	else if(b*b-4*a*c>0)
		cout<<1;
	else
		cout<<-1;
}
