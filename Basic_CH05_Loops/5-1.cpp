#include <iostream>
using namespace std;

main(){
	int n,i,product=1;
	cin>>n>>i;
	while(n<0||i<0)
		cin>>n>>i;
	if(i==0)
		cout<<1;
	else{
		for(int x=1;x<=i;x++){
			product *= n;
		}
		cout<<product;
	}
	
}
