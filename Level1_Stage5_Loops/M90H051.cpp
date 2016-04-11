#include <iostream>
using namespace std;

main(){
	//1/(1*2) + 1/(2*3) + 1/(3*4) +...
	int n;
	float sum=0.0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum += (float)1/(i*(i+1));
	}
	cout<<sum;
}
