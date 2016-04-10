#include <iostream>
using namespace std;

main(){
	int n;
	float sum=0.0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			float f = (float)1/i;
			sum += f;
		}
	}
	cout<<sum;
}
