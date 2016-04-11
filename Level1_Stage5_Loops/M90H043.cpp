#include <iostream>
using namespace std;

main(){
	//1-3+5-7+9-11+.......
	int n, x, sum=0;
	do{
		cin>>n;	
	}while(n<1);
	
	for(int i=1;i<=n;i++){
		if(i%2==0)
			x = -1;
		else
			x = 1;
		sum += ((2*i)-1)*x;
	}
	cout<<sum;
}
