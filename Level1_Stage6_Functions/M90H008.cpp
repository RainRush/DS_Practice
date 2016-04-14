#include <iostream>
using namespace std;

double f(double x){
	return (x+3)/(x+2);
}

main(){
	//function iteration
	int x;
	cin>>x;
	cout<<f(x)<<" "<<f(f(x))<<" "<<f(f(f(x)));
}
