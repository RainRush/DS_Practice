#include <iostream>
using namespace std;

main(){
	//Compare 100 numbers
	int a[10],tmp,i,j;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	for(i=9;i>=0;i--){
		for(j=9;j>=10-i;j--){
			if(a[j-1]>a[j]){
				tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
		}
	}
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
}
