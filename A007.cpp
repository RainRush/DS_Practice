#include <iostream>
using namespace std;

main(){
	//find the Greatest Common Dividor(GCD)
	int x,y;
	while(cin>>x>>y){
		if(x<0) x*=-1;
		if(y<0) y*=-1;
		while(x!=y){
			x>y ? x-=y:y-=x;
		}
		cout<<x;
	}
	return 0;
}

