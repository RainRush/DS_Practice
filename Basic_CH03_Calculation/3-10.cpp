#include <iostream>
using namespace std;

main(){
	int a,b,c,d,e,ae,be,ce;
	cin>>a>>b>>c>>d>>e;
	ae = a-2*e;
	be = b-2*e;
	ce = c-2*e;
	//cout<<2*(a*b-ae*be)+2*(a*c-ae*ce)+2*(b*c-be*ce)+16*ae*d+16*be*d+16*ce*d;
	//cout<<8*(ae*e+ae*d)+8*(be*e+be*d)+8*(ce*e+ce*d)+72*e*e;
	cout<<2*a*b+2*a*c+2*b*c+8*(ae*d)+8*(be*d)+8*(ce*d);
}
