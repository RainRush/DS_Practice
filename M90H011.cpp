#include <stdio.h>

main(){
	int m, n;
	printf("Please type in the integer m: ");
	scanf("%d", &m);
	printf("Please type in the integer n: ");
	scanf("%d", &n);
	printf("\n\n");
	
	int quo = m / n; 
	int rem = m % n;
	printf("The quotient of m / n is: %d\n", quo);
	printf("The remainder of m / n is: %d", rem);
	
	return 0;
}
