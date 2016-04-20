#include <stdio.h>
#include <stdlib.h>

main(){
	int i,*pi,j;
	pi = &i;
	i = 10;
	printf("%d and %d\n",*pi, pi);
	pi = &j;
	j = 20;
	printf("%d and %d\n",*pi,pi);
	
	//summary: pointer points to the memory address.
}
