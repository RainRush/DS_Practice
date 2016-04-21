#include <iostream>
using namespace std;

main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			if(b>c)
				cout<<c;
			else
				cout<<b;	
		}
		else
			cout<<b;
	}
	else{
		if(b>c){
			if(a>c)
				cout<<c;
			else
				cout<<a;
		}
		else
			cout<<a;
	}
}
