#include <iostream>
using namespace std;

main(){
	//1^1 + 2^1 + 3^1 +...
	int n, sum=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		sum += i;
	}
	cout<<sum;
}
