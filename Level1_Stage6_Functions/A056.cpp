#include <stdio.h>
#include <stdlib.h>

int count=0;

int gcd(int m, int n){
	count++;
	int tmp;
	while(n!=0){
		tmp = m % n;
		m = n;
		n = tmp;
	}
	return m;
}

main(){
	//Greatest Common Divisor Function and Times Function Called
	int x, y;
	scanf("%d%d", &x, &y);
	int ans = gcd(x,y);
	printf("Times of function used: %d\n", count);
	printf("f(n) = %d",ans);
}
