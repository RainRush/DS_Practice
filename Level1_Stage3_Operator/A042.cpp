#include <iostream>
#include <math.h> 
using namespace std;

main(){
	int a, b;
	cin>>b;
	while(b>30||b<0){
		cout<<"0<=x<31"<<endl;
		cin>>b;
	}
	a = pow(2,b);
	cout<<a;
	return 0;	
}
