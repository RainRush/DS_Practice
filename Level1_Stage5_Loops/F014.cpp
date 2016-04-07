#include <iostream>
using namespace std;

main(){
	//ASCII LIST 32-128
	for (int i=2;i<=8;i++){
		for (int j=0;j<16;j++){
			int k = i * 16 + j; 
			cout<<char(k);
		}
		cout<<endl;
	}
}
