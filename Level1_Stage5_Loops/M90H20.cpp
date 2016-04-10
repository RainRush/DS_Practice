#include <iostream>
using namespace std;

int gcd(int m, int n);

main(){
	//the greatest common divisor of two nums
	int m, n;
	cin>>m>>n;
	cout<<gcd(m,n);
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
