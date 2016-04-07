#include <iostream>
using namespace std;

main(){
	int x,a,b;
	cout<<"請輸入一個數字:"<<endl;
	cin>>x;
	a = x%10;
	b = x%12;
	cout<<"其代表天干地支為:";
	switch(a){
		case 0:{
			cout<<"甲";
			break;
		}
		case 1:{
			cout<<"乙";
			break;
		}
		case 2:{
			cout<<"丙";
			break;
		}
		case 3:{
			cout<<"丁";
			break;
		}
		case 4:{
			cout<<"戊";
			break;
		}
		case 5:{
			cout<<"己";
			break;
		}
		case 6:{
			cout<<"庚";
			break;
		}
		case 7:{
			cout<<"辛";
			break;
		}
		case 8:{
			cout<<"壬";
			break;
		}
		case 9:{
			cout<<"癸";
			break;
		}
	}
	switch(b){
		case 0:{
			cout<<"子";
			break;
		}
		case 1:{
			cout<<"丑";
			break;
		}
		case 2:{
			cout<<"寅";
			break;
		}
		case 3:{
			cout<<"卯";
			break;
		}
		case 4:{
			cout<<"辰";
			break;
		}
		case 5:{
			cout<<"巳";
			break;
		}
		case 6:{
			cout<<"午";
			break;
		}
		case 7:{
			cout<<"未";
			break;
		}
		case 8:{
			cout<<"申";
			break;
		}
		case 9:{
			cout<<"酉";
			break;
		}
		case 10:{
			cout<<"戌";
			break;
		}
		case 11:{
			cout<<"亥";
			break;
		}
	}
}
