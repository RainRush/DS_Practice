#include <iostream>
using namespace std;

main(){
	int a;
	cin>>a;
	if(a%2==0){
		if(a==0)
			cout<<"ZERO!";
		else
			cout<<"EVEN!";	
	}
	else
		cout<<"ODD!";
	return 0;
}

