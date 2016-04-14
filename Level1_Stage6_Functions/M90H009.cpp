#include <iostream>
using namespace std;

double f(double x){
	return (x+3)*(x+1)/(x+2);
}

main(){
	//function iteration
	int x;
	cin>>x;
	cout<<f(f(f(x));
}
