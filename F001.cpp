#include <stdio.h>

main(){
	int a, b;
	printf("Please type in the first input:");
	scanf("%d", &a);
	printf("Please type in the second input:");
	scanf("%d", &b);
	int sum = a + b;
	printf("The sum of %d and %d is %d.", a, b, sum);
	return 0;
}
