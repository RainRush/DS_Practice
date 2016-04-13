#include <iostream>
using namespace std;

void print(int n){
	for(int i=0;i<n;i++){
		cout<<"i love C++"<<endl;
	}
}

int main(){
	//function [void print()]
	int n;
	cin>>n;
	print(n);
	return 0;
}
