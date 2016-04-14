#include <iostream>
#include <cmath>
using namespace std;

main(){
	//three points' triangle's area
	double x1,y1,x2,y2,x3,y3,a,b,c,s,ans;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	b = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	c = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	s = (a+b+c)/2;
	ans = sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<ans;
}
