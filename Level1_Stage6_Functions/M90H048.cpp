#include <iostream>
#include <cmath>
using namespace std;

main(){
	//1^k + 2^k + ... + n^k
	int k,n,ans;
	cin>>k>>n;
	for(int i=1;i<=n;i++){
		ans += pow(i,k);
	}
	cout<<ans;
}
