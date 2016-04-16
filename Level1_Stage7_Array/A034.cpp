#include <iostream>
using namespace std;

main(){
	//Compare the three numbers, can only use one if condition
	int a[3],tmp,i,j;
	for(i=0;i<3;i++){
		cin>>a[i];
	}
	for(i=2;i>=0;i--){
		for(j=2;j>=3-i;j--){
			if(a[j]<a[j-1]){
				tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
			}
		}
	}
	for(i=0;i<3;i++){
		cout<<a[i]<<" ";
	}
}
