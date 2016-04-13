#include<stdio.h>
#include<stdlib.h>
int time=0;

int fib (int a){
	time++;
	if(a==0||a==1)
		return a;
	else 
		return fib(a-1)+fib(a-2);
}

int main(){
	//fibonacci function and times function used
	int a;
	scanf("%d",&a);
	int ans=fib(a);
	printf("Times of the functions used: %d\n",time);
	printf("f(n)=%d",ans);
	return 0;
}
