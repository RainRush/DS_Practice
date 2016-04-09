#include <iostream>
using namespace std;

main(){
	for(int i=0;i<60;i++){
		cout<<i<<">";
		if(i%10==0)
			cout<<"¥Ò";
		else if(i%10==1)
			cout<<"¤A";
		else if(i%10==2)
			cout<<"¤þ";
		else if(i%10==3)
			cout<<"¤B";
		else if(i%10==4)
			cout<<"¥³";
		else if(i%10==5)
			cout<<"¤v";
		else if(i%10==6)
			cout<<"©°";
		else if(i%10==7)
			cout<<"¨¯";
		else if(i%10==8)
			cout<<"¤Ð";
		else if(i%10==9)
			cout<<"¬Ñ";
		else
			cout<<" ";
		if(i%12==0)
			cout<<"¤l";
		else if(i%12==1)
			cout<<"¤¡";
		else if(i%12==2)
			cout<<"±G";
		else if(i%12==3)
			cout<<"¥f";
		else if(i%12==4)
			cout<<"¨°";
		else if(i%12==5)
			cout<<"¤x";
		else if(i%12==6)
			cout<<"¤È";
		else if(i%12==7)
			cout<<"¥¼";
		else if(i%12==8)
			cout<<"¥Ó";
		else if(i%12==9)
			cout<<"¨»";
		else if(i%12==10)
			cout<<"¦¦";
		else if(i%12==11)
			cout<<"¥è";
		else
			cout<<" ";
		cout<<endl;
	}
}
