#include <iostream>
#include <cmath>
using namespace std;

main(){
	//triangle parameter
	double x1,y1,x2,y2,x3,y3,a,b,c;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	b = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	c = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	cout<<a+b+c;
}
