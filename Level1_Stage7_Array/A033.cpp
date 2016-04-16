#include <iostream>
using namespace std;

main(){
	//Pascal Triangle 
	int n, a[20][20],b,c,x;
	do{
		cin>>n;
	}while(n>20);
	for(b=0;b<=n;b++){
		a[0][b]=0;
		a[b][0]=1;
	}
	for(b=1;b<=n;b++){
		for(c=1;c<=n;c++){
			a[b][c]=a[b-1][c-1]+a[b-1][c];
		}
	}
	for(b=0;b<=n;b++){
		x=n+1;
		do{
			cout<<" ";
			x--;	
		}while(x>b);
		for(c=0;c<=n;c++){
			cout<<a[b][c];
			if(a[b][c+1]==0 || c==n){
				cout<<endl;
				break;
			}
			else
				cout<<" ";
		}
	}
}
