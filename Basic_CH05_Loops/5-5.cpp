#include <iostream>
using namespace std;

main(){
	int a[100],b[100],n,x=0,y=0,time_diff;
	int direction = 2; //if direction = 1->x+; 2->y+; 3->x-; 4->y-
	for(int i=0;i<100;i++){
		cin>>a[i];
		cin>>b[i];
		if(b[i]==3){
			n = i+1;
			break;	
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]==1)
			direction++;
		else if(b[i]==2)
			direction--;
			
		if(i-1<0)
			time_diff=a[i];
		else
			time_diff=a[i]-a[i-1];
		time_diff*=10;
		if(direction%4==1||direction%4==-3){
			x+=time_diff;
		}
		else if(direction%4==2||direction%4==-2){
			y+=time_diff;
		}
		else if(direction%4==3||direction%4==-1){
			x-=time_diff;
		}
		else if(direction%4==0){
			y-=time_diff;
		}
	}
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
}
