#include <iostream>
using namespace std;

main(){
	//Find the standard resolving type 
	int a,temp=2;
	cin>>a;
	while(a>1){
		temp=2;
		while(a%temp!=0){
			temp++;
		}
		if(temp==a){
			cout<<temp;
	    }
		else{
			cout<<temp<<"*";
    	}
		a/=temp;
	}
}
