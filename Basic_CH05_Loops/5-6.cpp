#include <iostream>
using namespace std;

main(){
	int y,days_y,m,days_m,d,days_d,total_days;
	cin>>y>>m>>d;
	days_y = y*365;
	for(int i=1;i<=y;i++){
		if(i%4==0)
			days_y++;
		if(i%100==0)
			days_y--;
		if(i%400==0)
			days_y++;
	}
	days_y -= 719527;
	if(y%4==0&&(y%100!=0||y%400==0)){	//leap year
		switch(m){
			case 1: days_m=1; break;
			case 2: days_m=32; break;
			case 3: days_m=61; break;
			case 4: days_m=92; break;
			case 5: days_m=122; break;
			case 6: days_m=153; break;
			case 7: days_m=183; break;
			case 8: days_m=214; break;
			case 9: days_m=245; break;
			case 10: days_m=275; break;
			case 11: days_m=306; break;
			case 12: days_m=336; break;
			default: days_m=-1;
		}
	}
	else{
		switch(m){
			case 1: days_m=1; break;
			case 2: days_m=32; break;
			case 3: days_m=60; break;
			case 4: days_m=91; break;
			case 5: days_m=121; break;
			case 6: days_m=152; break;
			case 7: days_m=182; break;
			case 8: days_m=213; break;
			case 9: days_m=244; break;
			case 10: days_m=274; break;
			case 11: days_m=305; break;
			case 12: days_m=335; break;
			default: days_m=-1;
		}
	}
	days_d = d-1;
	if(y%4==0&&(y%100!=0||y%400==0)){
		days_m--;	
	}
	if(days_y<0||days_m<0||days_d>30||days_d<0){
		cout<<0;
	}
	else{
		cout<<days_y<<endl<<days_m<<endl<<days_d<<endl;
		cout<<days_y+days_m+days_d;
	}
}
