#include <stdio.h>
#include <math.h>

int main(){
	/* overflow of integer*/
	int a=1;
	while(a>0){
		a = pow((1+1),a);
	}
	
	printf("%d\n",a-1);
	printf("%d",a);
	
	return 0;
}
