#include <iostream>
using namespace std;

main(){
	int a[10], max=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
		if(a[i]>max)
			max = a[i];
	}
	cout<<"The maximum number is "<<max<<endl;
	cout<<"The numbers in the arrays are "<<endl;
	for(int j=0;j<10;j++){
		cout<<a[j]<<" ";
	}
}
