#include <iostream>
using namespace std;

main(){
	//plural multiplication
	int a, b, c, d;
	cout<<"Please type in the numbers a, b, c, d of (a+bi)*(c+di) sequentially\n";
	cin>>a>>b>>c>>d;
	cout<<endl<<"The answer of ("<<a<<" + "<<b<<"i) * ("<<c<<" + "<<d<<"i) = "<<(a*c-b*d)<<" + "<<(a*d+b*c)<<"i"<<endl<<endl;
	system("pause");
	return 0;
}
