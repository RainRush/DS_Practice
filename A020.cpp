#include <iostream>
using namespace std;

main(){
	int a=0;
	while(a%7!=3||a%9!=4||a%10!=2||a%11!=1){
		a++;
	}
	cout<<a;
}
