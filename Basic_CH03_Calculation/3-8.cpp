#include <iostream>
using namespace std;

main(){
	int a,b,c;
	cin>>a>>b>>c;
	while(a==0){
		cin>>a>>b>>c;
	}
	if(b*b-4*a*c==0)
		cout<<1;
	else
		cout<<0;
}
