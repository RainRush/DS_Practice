#include <iostream>
using namespace std;

main(){
	//sum of the power of a number's all positive factors
	int n, sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			sum += i*i;
		}
	}
	cout<<sum;
}
