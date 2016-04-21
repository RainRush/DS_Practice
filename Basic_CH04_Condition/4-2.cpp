#include <iostream>
using namespace std;

main(){
	int x1,y1,x2,y2,x3,y3,dis1,dis2,dis3,min_x,min_y,min_dis;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	dis1=x1*x1+y1*y1;
	dis2=x2*x2+y2*y2;
	dis3=x3*x3+y3*y3;
	
	if(dis1<=dis2){
		min_x = x1;
		min_y = y1;
	}
	else{
		min_x = x2;
		min_y = y2;
	}
	min_dis = min_x*min_x + min_y*min_y;
	
	if(dis3<min_dis){
		min_x = x3;
		min_y = y3;
	}
	
	cout<<"("<<min_x<<","<<min_y<<")";
}
