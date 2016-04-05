#include <iostream>
using namespace std;

main(){
	//ans = 1*3 + 3*5 + 5*7 + (2n-1)(2n+1)
	int n, ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		ans = ans + (2*i-1)*(2*i+1); 
	}
	cout<<ans;
}
