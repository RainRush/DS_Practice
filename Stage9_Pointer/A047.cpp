#include <iostream>
#include <vector>
using namespace std;

main(){
	//sort the "n" numbers, input the "n" numbers and print it out ascended
	int n,tmp;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>tmp;
		a[i]=tmp;
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;	
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
