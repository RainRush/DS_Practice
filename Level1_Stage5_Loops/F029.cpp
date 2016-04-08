#include <iostream>
using namespace std;

main(){
	int n;
	double sum=0.0, tmp_n=1.0;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			tmp_n *= j;
		}
		sum += 1/tmp_n;
		tmp_n = 1;
	}
	cout<<sum;
}

