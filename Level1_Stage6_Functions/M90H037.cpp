#include <iostream>
#include <cmath>
using namespace std;

main(){
	//distance between two points
	double x1,y1,x2,y2,d;
	cin>>x1>>y1>>x2>>y2;
	d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	cout<<d;
}
