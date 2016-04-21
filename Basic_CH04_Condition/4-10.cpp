#include <iostream>
#include <cmath>
using namespace std;

main(){
	int a[12],temp,d1,d2,d3;
	for(int i=0;i<12;i++){
		cin>>a[i];
	}
	for(int i=0;i<12;i++){
		if(i!=2&&i!=3&&i!=6&&i!=7&&i!=10&&i!=11){
			if(a[i]<a[i+2]){
				temp = a[i];
				a[i] = a[i+2];
				a[i+2] = temp;
			}
		}
	}
	d1 = sqrt((a[0]-a[2])*(a[0]-a[2])+(a[1]-a[3])*(a[1]-a[3]));
	d2 = sqrt((a[4]-a[6])*(a[4]-a[6])+(a[5]-a[7])*(a[5]-a[7]));
	d3 = sqrt((a[8]-a[10])*(a[8]-a[10])+(a[9]-a[11])*(a[9]-a[11]));
	
	if(d1+d2<d3||d1+d3<d2||d2+d3<d1)
		cout<<0;
	else
		cout<<1;
}
