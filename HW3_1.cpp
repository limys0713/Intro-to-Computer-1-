//HW3_1
#include<stdio.h>
#include<math.h>

float coef1(int x, int y, int z);
float coef2(int x, int y, int z);

int main(void) {

	int number1,number2,number3;

	printf("Enter the coefficient of x^2,x and constant:");
	scanf_s("%d%d%d", &number1, &number2, &number3);

	if (number2 * number2 - 4 * number1 * number3 >= 0) {
		printf("The equation has two real roots.\n");
		printf("The first of the roots of the equation is:%f\n", coef1(number1, number2, number3));
		printf("The second of the roots of the equation is:%f", coef2(number1, number2, number3));
	}
	else {
		printf("The equation has two imaginary roots.");
	}
	
}
float coef1(int x, int y, int z)
{
	float root1;

		root1 = (-y + sqrt((double)(y * y - 4 * x * z))) / (2 * x);
	
	return root1;
}
float coef2(int x, int y, int z)
{
	float root2;

	root2 = (-y - sqrt((double)(y * y - 4 * x * z))) / (2 * x);

	return root2;
}
