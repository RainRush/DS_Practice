#include <stdio.h>

main(){
	float h,w;
	printf("Your height (meters as unit):");
	scanf("%f", &h);
	printf("Your weight (kilograms as unit):");
	scanf("%f", &w);
	float bmi = w / (h*h);
	if(bmi<18.5)
		printf("Your BMI is %f, you probably gonna gain weight!", bmi);
	else if (bmi>=24)
		printf("Your BMI is %f, you need to lose some weight!", bmi);
	else
		printf("Your BMI is %f, keep your shape!", bmi);
		
	return 0;
}
