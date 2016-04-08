#include <iostream>
using namespace std;

main(){
	//input n and find the sum of (1^2+2^2+...+n^2)
	int n, sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum = sum + i*i;
	}
	cout<<sum;
}
