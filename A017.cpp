#include <iostream>
#include <math.h>
using namespace std;

main(){
	int a, b, c;
	cin>>a>>b>>c;
	int ab = a*a+b*b;
	int bc = b*b+c*c;
	int ca = c*c+a*a;
	if(a==b&&b==c)
		cout<<"regular triangle";
	else if(a==b||b==c||c==a){
		if(ab==c*c||bc==a*a||ca==b*b)
			cout<<"isosceles righttriangle";
		else
			cout<<"isosceles triangle";
	}	
	else if(a+b<=c||a+c<=b||b+c<=a)
		cout<<"not a triangle";
	else{
		if(ab==c*c||bc==a*a||ca==b*b)
			cout<<"rectangular triangle";
		else if(ab>c*c||bc>a*a||ca>b*b)
			cout<<"obcute triangle";
		else
			cout<<"acute triangle";
	}
	return 0;
}

