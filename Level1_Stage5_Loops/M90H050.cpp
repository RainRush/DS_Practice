#include <iostream>
using namespace std;

main(){
	//1*n + 2*(n-1) + ... + (n-1)*2 + n*1 
	int n, sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum += i*(n-i+1);
	}
	cout<<sum;
}
