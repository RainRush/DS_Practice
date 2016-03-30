#include <iostream>
using namespace std;

main(){
	//plural division
	double a, b, c, d;
	cout<<"Please type in the numbers a, b, c, d of (a+bi)/(c+di) sequentially\n";
	cin>>a>>b>>c>>d;
	cout<<endl<<"The answer of ("<<a<<" + "<<b<<"i) / ("<<c<<" + "<<d<<"i) = "<<((a*c+b*d)/(c*c+d*d))<<" + "<<((b*c-a*d)/(c*c+d*d))<<"i"<<endl<<endl;
	system("pause");
	return 0;
}

