#include <stdio.h>

main(){
	int a, b;
	printf("Please type in the length of the rectangle:");
	scanf("%d", &a);
	printf("Please type in the width of the rectangle:");
	scanf("%d", &b);
	while(a<b){
		printf("The length must be larger than the width\n");
		printf("Please type in the length of the rectangle:");
		scanf("%d", &a);
		printf("Please type in the width of the rectangle:");
		scanf("%d", &b);
	}
	int area = a * b;
	printf("The area of this rectangle is %d", area);
	return 0;
}
