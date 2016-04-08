#include <iostream>
using namespace std;

main(){
	//find the number below n which is both the multiplication of 2 and 3
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		while(i%2==0&&i%3==0){
			cout<<i<<" ";
			break;
		}
	}
} 
