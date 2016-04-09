#include <iostream>
using namespace std;

main(){
	int a, b, c, d, left, total = 1;
	cin>>a>>b>>c>>d;
	while(a<b){
		cout<<"a must be larger than b";
		cin>>a>>b>>c>>d;
	}
	left = a-b;
	while(left>0){
		left -= c;
		if(left<=0)
			break;
		else
			left += d;
			total++;
	}
	cout<<"Haaray, I'm on the top of the world on the "<<total<<" day!";
}
