#include <iostream>
using namespace std;

main(){
	int a, b, c;
	cin>>a>>b>>c;
	if(a*a+b*b==c*c)
		cout<<"Yes";
	else if(a+b<c)
		cout<<"Input Error";
	else
		cout<<"No";
	return 0;
}
