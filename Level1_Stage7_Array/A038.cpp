#include <iostream>
#include <cmath>
using namespace std;

main(){
	//calculate the average and the variance
	int a[10],i;
	double sum=0.0, n=10.0;
	for(i=0;i<10;i++)
		cin>>a[i];
	for(i=0;i<10;i++){
		sum += a[i];
	}
	double avg = sum/n;
	sum = 0.0;
	for(i=0;i<10;i++){
		sum += pow((double)a[i]-avg,2);
	}
	double var = sum/n;
	cout<<"average: "<<avg<<" and variance: "<<var;
}
