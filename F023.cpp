#include <iostream>
using namespace std;

main(){
	int price;
	cin>>price;
	while(price<0){
		cout<<"Please type in an integer larger than 0: \n";
		cin>>price;
	}
	if(price>=10000)
		cout<<price*0.85;
	else if(price>=1000&&price<10000)
		cout<<price*0.9;
	else if(price>=100&&price<1000)
		cout<<price*0.95;
	else
		cout<<price;
}
