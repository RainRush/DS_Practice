#include <iostream>
using namespace std;

main(){
	int a;
	cin>>a;
	if(a>=90&&a<=100)
		cout<<"A+";
	else if(a>=80&&a<90)
		cout<<"A";
	else if(a>=70&&a<80)
		cout<<"B";
	else if(a>=60&&a<70)
		cout<<"C";
	else if(a>=0&&a<60)
		cout<<"D";	
	else
		cout<<"Please give an input between 0-100";
		
	return 0;
}

