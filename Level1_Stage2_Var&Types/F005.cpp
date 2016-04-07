#include <stdio.h>
#include <math.h>

int main( ){
	// overflow of unsigned short
	unsigned short a=0;
	
	printf("%d\n",a);
	a = a - 1;	//0 - 1 -> -1 -> unsigned overflow -> 65535
	printf("%d",a);
	
	return 0;
}
