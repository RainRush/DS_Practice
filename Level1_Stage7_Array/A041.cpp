#include <iostream>
using namespace std;

main(){
	//bubble sort
	int n[10] = {0};
	
	for(int i=0; i<=9; i++){
		cin >> n[i];
	}

	for(int i=0; i<=9; i++){
		for(int j=0; j<=8; j++){
			if(n[j] > n[j+1]){
				int t=n[j+1];
				n[j+1] = n[j];
				n[j] = t; 
			}
		}
	}
	for(int i=0; i<=9; i++){
		cout << n[i] << " ";
	}
}
