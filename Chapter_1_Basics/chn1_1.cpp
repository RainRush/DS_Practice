#include <stdio.h>
#include <stdlib.h>

main(){
	int i, *pi;
	float f, *pf;
	if(!(pi = (int *)malloc(sizeof(int)))||!(pf = (float *)malloc(sizeof(float))))	{
		fprintf(stderr, "Insufficient memory");
		exit(EXIT_FAILURE);	
	}
	*pi = 1024;
	*pf = 3.14;
	printf("an integer = %d, a float = %f\n", *pi, *pf);
	printf("address for this int = %d, for that float = %d\n", pi, pf);		//can't use %f here for the address, or the output will be 0.00
	free(pi);
	free(pf);
}
