#include <math.h>
#include <stdio.h>

main(){
	int n, tmp;
	int sum = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		tmp = i+1;
		tmp = pow(2, tmp);
		sum = tmp + sum;
	}
	printf("%d", sum);
}

