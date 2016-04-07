#include <iostream>
using namespace std;

main(){
	//find the numbers (a,b,c,d,e) who matchs (abcde)*(a)=(bbbbbe)
	int a, b, c, d, e;
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					for(e=0;e<10;e++){
						if((a*10000+b*1000+c*100+d*10+e)*a==b*111110+e)
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}
				}
			}
		}
	}
}
