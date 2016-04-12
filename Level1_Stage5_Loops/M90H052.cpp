#include <iostream>
using namespace std;

main(){
	int n=10;
	double a=0.0;
	for(int i=0;i<8;i++){
		a = (double)(2*n+3)/(3*n-1);
		n*=10;
	}
	cout<<a;
}
