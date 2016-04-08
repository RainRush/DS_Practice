#include <iostream>
#include <cmath>
using namespace std;

main(){
	//f(x) = e^x = (x^0)/0! + (x^1)/1! + (x^2)/2! + ... + (x^10)/10!
	float x, tmp_x=1.0, sum=0.0;
	cin>>x;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=i;j++){
			tmp_x *= j;	
		}
		//cout<<pow(x,i)<<" "<<tmp_x<<" "<<pow(x,i)/tmp_x<<endl;
		sum += pow(x,i)/tmp_x;
		tmp_x = 1.0;
	}
	sum++; //(x^0)/0! = 1 -> sum = sum + 1
	cout<<sum;
}
