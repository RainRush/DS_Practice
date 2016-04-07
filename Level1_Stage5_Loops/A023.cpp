#include <iostream>
using namespace std;

main(){
	//find all primes smaller than the input
	int N,k;
	cin>>N;
	for(int i=2;i<N;++i){
    	k=0;
    	for(int j=1;j<i;++j){
        	if(i%j!=0){
        		++k;
        	}
    	}
    	if(k==i-2){
        	cout<<i<<" ";
    	}
	}
}
