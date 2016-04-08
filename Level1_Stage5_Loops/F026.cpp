#include <iostream>
using namespace std;

main(){
	int d, i=0;
	cin>>d;
	d = d * 100000;
	while(d>1){
		d /= 2;
		i++;
	}
	cout<<i;
}
