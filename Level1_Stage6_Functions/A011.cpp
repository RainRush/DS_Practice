#include <iostream>
using namespace std;

main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(i==2 && n%i==0) cout<<i<<" ";
		else if(n%i==0){
			for(int j=2;j<i;j++){
				if(i%j==0) break;
				else if(j+1==i && i%j!=0) cout<<i<<" ";
			}
		}
	}
}
