#include <iostream>
using namespace std;

int cal(int n){
	int sum=0;
	if(n==0) return 1;
	for(int i=0;i<n;i++){
		sum += cal(i)*cal(n-i-1);
	}
	return sum;
}

main(){
	//Already known that f(0)=1 and f(n)=f(0)*f(n-1)+f(1)*f(n-2)+f(2)*f(n-3)+f(3)*f(n-4)+...+f(n-1)*f(0)¡C 
	
	int a;
	cin>>a;
	cout<<cal(a);
	return 0;
}
