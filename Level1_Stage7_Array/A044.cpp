#include <iostream>
using namespace std;

main(){
	//scrumble numbers input
	int a[10];
	int temp,j;
	for(int i=0;i<10;++i){
    	cin>>a[i];
	}
	for(int i=0;i<10;++i){
		j=(i*i+7)%10;
    	temp=a[i];
    	a[i]=a[j];
    	a[j]=temp;
	}
	for(int i=0;i<10;++i){
		cout <<a[i]<<" ";
	}
}
