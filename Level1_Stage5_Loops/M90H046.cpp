#include <iostream>
using namespace std;

main(){
	//1^3 + 2^3 + 3^3 +...
	int n, sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum += i*i*i;
	}
	cout<<sum;
}
