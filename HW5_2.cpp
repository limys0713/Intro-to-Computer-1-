//HW5_2
#include<stdio.h>

double answer(double x, int y);

int main(void){
	
	double base;
	int exponent;

	printf("Insert the base and its exponent: ");
	scanf_s("%lf%d", &base, &exponent);
	printf("The answer is : %f", answer(base,exponent));

	return 0;
}
double answer(double x, int y) {
	
	if (y == 1) {
		return x;
	}
	else {
		return (x*answer(x,y-1));
	}
}