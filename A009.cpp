#include <iostream>
using namespace std;

main(){
	//whether prime or not problem
	int i, j;
	bool k=true;
	cin>>i;
	for(j=2;j<i;j++){
		if(i%j==0){
			k = false;
			break;
		}
	}
	if(k == true)
		cout<<"Yes";
	else
		cout<<"No";
}

