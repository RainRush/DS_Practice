#include <stdio.h>

main(){
	int l,w,h;
		printf("Length of the cube:");
		scanf("%d", &l);
		printf("Width of the cube:");
		scanf("%d", &w);
		printf("Height of the cube:");
		scanf("%d", &h);
		while(l<w){
			printf("The length must be larger than the width!\n");
			printf("Length of the cube:");
			scanf("%d", &l);
			printf("Width of the cube:");
			scanf("%d", &w);
			printf("Height of the cube:");
			scanf("%d", &h);
		}
		int volumn = l * w * h;
		printf("The volumn of the cube is %d.\n", volumn);
		
	return 0;
}
