#include <stdio.h>

main(){
	int i,j,k;
	printf("How many students in class?");
	scanf("%d", &j);
	int g[j];
	for(i=0;i<j;i++){
		int tmp_i = i + 1;
		printf("Student No.%d's grade:", tmp_i);
		scanf("%d", &g[i]);
	}
	printf("\n\n");
	for(k=0;k<j;k++){
		int tmp_k = k + 1;
		int tmp_g = g[k];
		int adj_g = g[k] * 0.4 + 60;
		printf("Student No.%d's original grade is %d; adjusted grade is %d \n", tmp_k, tmp_g, adj_g);
	}
	return 0;
} 
