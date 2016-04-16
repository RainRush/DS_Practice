#include <iostream>
using namespace std;

main(){
	//Show where the minimum number is.
	int a[10],tmp,i,j;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	for(i=9;i>=0;i--){
		for(j=9;j>=10-i;j--){
			if(a[j-1]>a[j]){
				tmp = j;
			}
		}
	}
	cout<<"The "<<tmp+1<<" number is the minimum one.";
}
