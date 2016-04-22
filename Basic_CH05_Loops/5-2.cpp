#include <iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++){
		if(i<n)
			cout<<i<<endl;
		else{
			for(int j=n;j>=1;j--)
				cout<<j<<endl;
		}
	}
}
