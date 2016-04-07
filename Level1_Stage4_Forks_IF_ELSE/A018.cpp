#include <iostream>
using namespace std;

main(){
	//+:43 -:45 *:42 /:47
	int a, c, result;
	char b;
	cout<<"Please type in the formula you want to calculate (e.g: x * y) : ";
	cin>>a>>b>>c;
	int b2 = int(b);
	if(b2==43){
		result = a + c;
		cout<<result;
	}
	else if(b2==45){
		result = a - c;
		cout<<result;
	}	
	else if(b2==42){
		result = a * c;
		cout<<result;
	}
	else if(b2==47){
		result = a / c;
		cout<<result;
	}
	else{
		cout<<"Please type in rather (+,-,*,/)";
	}
	return 0;
}
