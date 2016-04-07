#include <stdio.h>

void print_transform(int n){
	if(n){
		print_transform(n / 7);
		printf("%d", n % 7);
	}
}

int main(){
	//transform decimal to seven into bits
	int n;
	printf("N=\n");
	scanf("%d", &n);
	printf("N7=");
	print_transform(n);
	return 0;
}
