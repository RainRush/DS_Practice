#include <iostream>
using namespace std;

main(){
	//find the center of a shape
	int n, x_tmp, x_sum=0, y_tmp, y_sum=0;
	do{
		cout<<"How maybe spots does the shape has?(At least three)";
		cin>>n;
	}while(n<2);
	for(int i=1;i<=n;i++){
		cout<<"Please type the x of point "<<i<<" of the "<<n<<" spots."<<endl;
		cin>>x_tmp;
		cout<<"Please type the y of point "<<i<<" of the "<<n<<" spots."<<endl;
		cin>>y_tmp;
		x_sum += x_tmp;
		y_sum += y_tmp;
	}
	float x_ans = (float)x_sum/n;
	float y_ans = (float)y_sum/n;
	
	cout<<endl<<"The center of the shape is ("<<x_ans<<" , "<<y_ans<<").";
}
