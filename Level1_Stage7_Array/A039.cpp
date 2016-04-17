#include <iostream>
using namespace std;

main(){
	//print the first n primes
	int n;
	do{
		cin>>n;
	}while(n<0);
	bool isprime;
	cout<<endl<<"N=";
	int t=0;
	for(int j=2;t<n;j++){//2¶}©l
		isprime=true;	
		for(int k=2;k<j;k++)
			if(j%k==0){isprime=false;break;}
		if(isprime){
			t++;
			cout<<" "<<j;
		}
	}
}
