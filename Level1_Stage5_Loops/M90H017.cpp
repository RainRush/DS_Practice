#include <iostream>
using namespace std;

main(){
	//least common multiple of two numbers
	int m, n;
	cin>>m>>n;
	int p = m, q = n;
	while(n!=0){
		int r = m % n;
		m = n;
		n = r;
	}
	cout<<p*q/m;
}
