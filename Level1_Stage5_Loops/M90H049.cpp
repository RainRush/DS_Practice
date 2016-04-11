#include <iostream>
using namespace std;

main(){
	//1*2 + 2*3 + 3*4 +...
	int n, sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum += i*(i+1);
	}
	cout<<sum;
}
