#include <iostream>
using namespace std;

main(){
	int month;
	cin>>month;
	if(month<1||month>12)
		cout<<"!";
	else if(month==2||month==4||month==6||month==9||month==11)
		cout<<"<";
	else
		cout<<">";
	return 0;
}
