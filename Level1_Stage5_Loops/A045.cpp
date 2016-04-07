#include <stdio.h>
#include <stdlib.h>
void show(int *b,int k,int j){
	int i;
	for(i=0;i<8;i++){
		if(i!=k&&i!=j)
			printf(" %d",*b);
		b++;
	}
	printf("\n");
}

int compare(const void *arg1, const void *arg2){
	return  (*(int *)arg1 - *(int *)arg2);
}

int main(){
	int a[8];
	int i,j;
	scanf("%d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
	qsort((void *)a, 8, sizeof(int), compare);
	printf("\nInput:\n");

	for(i=0;i<8;i++){
		for(j=i;j<8;j++){
			if(i!=j){
		    	show(a,i,j);
			}
		}
	}
}
