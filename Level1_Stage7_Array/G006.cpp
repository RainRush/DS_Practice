#include <iostream>
using namespace std;

main(){
	//Chinese Calender
	int year;
	char a[10][4]={"��","�A","��","�B","��","�v","��","��","��","��"};
	char b[12][4]={"�l","��","�G","�f","��","�x","��","��","��","��","��","��"}; 
	cin>>year;

	int x = (year-4)%10;
	int y = (year-4)%12;
	cout<<"Year "<<year<<" is "<<a[x]<<b[y]<<" year.";
}
