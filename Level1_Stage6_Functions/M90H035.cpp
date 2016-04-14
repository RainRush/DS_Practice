#include <iostream>
#include <cmath>
using namespace std;

main(){
	//distance between a point and a line
	double a,b,c,x,y,d;
	cout<<"Type in the a,b,c of ax+by+c=0: "<<endl;
	cin>>a>>b>>c;
	cout<<"Type in the x,y of point (x0,y0): "<<endl;
	cin>>x>>y;
	d = abs(a*x+b*y+c)/sqrt(a*a+b*b);
	cout<<d;
}
