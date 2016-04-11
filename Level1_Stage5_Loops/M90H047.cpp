#include <iostream>
using namespace std;

main(){
	//1^4 + 2^4 + 3^4 +...
	int n, sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum += i*i*i*i;
	}
	cout<<sum;
}
