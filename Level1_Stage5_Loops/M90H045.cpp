#include <iostream>
using namespace std;

main(){
	//1^2 + 2^2 + 3^2 +...
	int n, sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum += i*i;
	}
	cout<<sum;
}
