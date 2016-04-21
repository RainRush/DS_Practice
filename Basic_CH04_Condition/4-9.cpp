#include <iostream>
using namespace std;

main(){
	int a,b,c;
	double x,y,z;
	cin>>a>>b>>c;
	y = (double)(b-8*a+6*c)/2;
	x = (double)c - y;
	z = (double)a - c;
	if((int)(y*1000)%1000!=0||(int)(x*1000)%1000!=0||x<0||y<0||z<0)
		cout<<0;
	else
		cout<<"Chicken: "<<x<<endl<<"Rabbit: "<<y<<endl<<"Crab: "<<z;	
}
