#include <iostream>
using namespace std;

main(){
	int month;
	cin>>month;
	while(month>12||month<1){
		cout<<"Please type in a number between 1-12\n4";
		cin>>month;
	}
	if(month>=3&&month<=5)
		cout<<"Spring";
	else if(month>=6&&month<=8)
		cout<<"Summer";
	else if(month>=9&&month<=11)
		cout<<"Autumn";
	else
		cout<<"Winter";
	return 0;
}
