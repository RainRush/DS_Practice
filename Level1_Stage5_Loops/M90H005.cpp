#include <iostream>
using namespace std;

main(){
	//(b) * (b-1) * (b-2) * (b-a+1)
	int a, b, total=1;
	cin>>a>>b;
	if(a>b){
		int tmp = b;
		b = a;
		a = tmp;
	}
	for(int i=0;i<a;i++){
		total *= b-i;
	}
	cout<<endl<<total;
}
