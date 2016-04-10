#include <iostream>
using namespace std;

int gcd(int m, int n);

main(){
	//the greatest common divisor of three numbers
	int x, y, z;
	cin>>x>>y>>z;
	cout<<gcd(gcd(x,y),z);
}

int gcd(int m, int n){
	int tmp;
	while(n!=0){
		tmp = m % n;
		m = n;
		n = tmp;
	}
	return m;
}
