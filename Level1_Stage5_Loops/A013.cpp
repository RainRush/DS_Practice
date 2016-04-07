#include <iostream>
using namespace std;

main(){
	//which day of the year is today?
	int y, m, d;
	cin>>y>>m>>d;
	if(y%4==0&&y%100!=0){
		if(m==1)
			cout<<d;
		else if(m==2)
			cout<<d+31;
		else if(m==3)
			cout<<d+60;
		else if(m==4)
			cout<<d+91;
		else if(m==5)
			cout<<d+121;
		else if(m==6)
			cout<<d+152;
		else if(m==7)
			cout<<d+182;
		else if(m==8)
			cout<<d+213;
		else if(m==9)
			cout<<d+244;
		else if(m==10)
			cout<<d+274;
		else if(m==11)
			cout<<d+305;
		else if(m==12)
			cout<<d+335;
	}
	else{
		if(y%400==0){
			if(m==1)
				cout<<d;
			else if(m==2)
				cout<<d+31;
			else if(m==3)
				cout<<d+60;
			else if(m==4)
				cout<<d+91;
			else if(m==5)
				cout<<d+121;
			else if(m==6)
				cout<<d+152;
			else if(m==7)
				cout<<d+182;
			else if(m==8)
				cout<<d+213;
			else if(m==9)
				cout<<d+244;
			else if(m==10)
				cout<<d+274;
			else if(m==11)
				cout<<d+305;
			else if(m==12)
				cout<<d+335;
		}
		else{
			if(m==1)
				cout<<d;
			else if(m==2)
				cout<<d+31;
			else if(m==3)
				cout<<d+59;
			else if(m==4)
				cout<<d+90;
			else if(m==5)
				cout<<d+120;
			else if(m==6)
				cout<<d+151;
			else if(m==7)
				cout<<d+181;
			else if(m==8)
				cout<<d+212;
			else if(m==9)
				cout<<d+243;
			else if(m==10)
				cout<<d+273;
			else if(m==11)
				cout<<d+304;
			else if(m==12)
				cout<<d+334;
		}
	}
}
