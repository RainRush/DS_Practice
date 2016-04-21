#include <iostream>
using namespace std;

main(){
	int a,b,c,d,x,y;
	cin>>a>>b>>c>>d;
	while(c<a||d<b){
		cin>>a>>b>>c>>d;
	}
	x = c-a;
	y = d-b;
	cout<<"Area: "<<x*y<<endl;
	cout<<"Parameter: "<<2*(x+y);
}
