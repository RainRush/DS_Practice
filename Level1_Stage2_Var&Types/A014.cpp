#include <iostream>
using namespace std;

main(){
	int n, p, d;
	printf("Please type in the 'n' of the formula (n^p)%%d :");
	scanf("%d", &n);
	printf("Please type in the 'p' of the formula (n^p)%%d :");	
	scanf("%d", &p);
	printf("Please type in the 'd' of the formula (n^p)%%d :");	
	scanf("%d", &d);
	int b = n;
	for(int i=0;i<p-1;i++){
		n *= b;
		printf("n: %d\n", n);
	}
	
	/*another way to solve*/
	
	/*
	while(--p){
		n *= b;
		n %= d;
	}
	*/
	
	//AND THERE IS NO NEED FOR THE OUTER (n = n % d)!
	
	n = n%d;
	printf("The answer is %d", n);
	
	return 0;
}

