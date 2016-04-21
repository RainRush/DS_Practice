#include <iostream>
using namespace std;

main(){
	int x1,y1,x2,y2,a,b;
	cin>>x1>>y1>>x2>>y2;
	while(x1==x2&&y1==y2){
		cin>>x1>>y1>>x2>>y2;
	}
	a = (y2-b)/x2;
	b = y1-(x1*a);
	if(b==0)
		cout<<1;
	else
		cout<<0;
}
