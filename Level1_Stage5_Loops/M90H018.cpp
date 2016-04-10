#include <iostream>
using namespace std;

int gcd(int m, int n);
int lcm(int m, int n);

main(){
	//least common multiple of three numbers
	int x, y, z;
	cin>>x>>y>>z;
	
	cout<<lcm(lcm(x,y),z);
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

int lcm(int m, int n){
	return (m*n/gcd(m,n));
}
