#include <iostream>
using namespace std;

main(){
	int x,y,x1,y1,x2,y2,dx1,dy1,dx2,dy2,t;
	cin>>x>>y>>x1>>y1>>x2>>y2>>dx1>>dy1>>dx2>>dy2>>t;
	for(int i=0;i<t;i++){
		x1 += dx1;	//move first 
		y1 += dy1;
		x2 += dx2;
		y2 += dy2;
		if(x1==x2&&y1==y2){		//after move, if run into each other
			if(dx1==dx2&&dy1!=dy2){		//moving direction
				dy1 = -dy1;
				dy2 = -dy2;
			}
			else if(dx1!=dx2&&dy1==dy2){
				dx1 = -dx1;
				dx2 = -dx2;
			}
			else if(dx1!=dx2&&dy1!=dy2){
				dx1 = -dx1;
				dx2 = -dx2;
				dy1 = -dy1;
				dy2 = -dy2;
			}
		}
		//ball 1's situation
		if((x1==0&&y1==0)||(x1==0&&y1==y)||(x1==x&&y1==0)||(x1==x&&y1==y)){	//bumps in (0,0),(x,0),(0,y),(x,y)
			dx1 = -dx1;
			dy1 = -dy1;
		}
		else if(y1==0||y1==y){	//bumps into x axis or x's limit
			dy1 = -dy1;
		}
		else if(x1==0||x1==x){	//bumps into y axis or y's limit
			dx2 = -dx2;
		}
		//ball 2's situation
		if((x2==0&&y2==0)||(x2==0&&y2==y)||(x2==x&&y2==0)||(x2==x&&y2==y)){	//bumps in (0,0),(x,0),(0,y),(x,y)
			dx2 = -dx2;
			dy2 = -dy2;
		}
		else if(y2==0||y2==y){	//bumps into x axis or x's limit
			dy2 = -dy2;
		}
		else if(x2==0||x2==x){	//bumps into y axis or y's limit
			dx2 = -dx2;
		}
	}
	cout<<endl<<x1<<endl<<y1<<endl<<x2<<endl<<y2;
}
