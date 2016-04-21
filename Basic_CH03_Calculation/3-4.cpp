#include <iostream>
using namespace std;

main(){
	int x;
	cin>>x;
	if((x%3==0&&x%5!=0)||(x%5==0&&x%3!=0))
		cout<<1;
	else
		cout<<0;
}
