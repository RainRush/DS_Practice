#include <stdio.h>
#include <math.h>

int main( ){
	// overflow of short
	short a=1;
	while(a>0){
		a += 1;
		//run 2~32767, -32768 jump out of the loop
	}
	//-32768
	a--;
	//-32768 - 1 -> -32769 -> overflow -> 32767
	
	printf("%d\n",a);
	a = a + 1;
	//32767 + 1 -> 32768 -> overflow -> -32768
	printf("%d",a);
	
	return 0;
}
