#include <iostream>
using namespace std;

main(){
	//product of a number's factors
	int n, sum=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0)
			sum *= i;
	}
	cout<<sum;
}
