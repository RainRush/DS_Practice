#include <iostream>
#include <math.h>
using namespace std;

main(){
	double a,b,c,d,ans1,ans2;
	cout<<"ax^2+bx+c=0"<<endl;
	cin>>a>>b>>c;
	d = pow(b,2);
	d = d-(4*a*c);
	if(d<0){	//b^2-4ac<0
		cout<<"No solution"; 
	}
	else{
		ans1 = ((-b)+sqrt(d))/(2*a);
		ans2 = ((-b)-sqrt(d))/(2*a);
		if(ans1==ans2){
			cout<<"x = "<<ans1<<" (Only Solution)";
		}
		else{
			cout<<"x = "<<ans1<<" or "<<ans2;	
		}
	}
	return 0;
}

