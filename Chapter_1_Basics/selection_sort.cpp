#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 101

void sort(int [], int );
void swap(int x, int y, int temp);

int main(){
	int i,n;
	int list[MAX_SIZE];
	printf("Enter the number of numbers to generate:");
	scanf("%d",&n);
	if(n<1||n>MAX_SIZE){
		fprintf(stderr,"Improper value of n\n");
		exit(EXIT_FAILURE);
	}
	for(i=0;i<n;i++){
		list[i]=rand()%1000;
		printf("%d ",list[i]);
		//scanf("%d",&list[i]);
	}
	sort(list,n);
	printf("\nSorted array: \n");
	for(i=0;i<n;i++){
		printf("%d ",list[i]);
	}
	printf("\n");
}

void sort(int list[], int n){
	int i, j, min, temp;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(list[min]>list[j])
				min = j;
		}
		if(min!=i){
			temp = list[i];
			list[i] = list[min];
			list[min] = temp;	
		}
	}
}
