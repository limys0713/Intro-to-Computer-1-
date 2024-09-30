#include<stdio.h>

int main(void) {

	double value1 = 20.4568;
	double value2;
	double* dPtr;
	dPtr = &value1;

	printf("The value of the object pointed to by dPtr is: %f\n", *dPtr);

	value2 = *dPtr;

	printf("The value of value2 is: %f\n", value2);
	printf("The address of value1 is: %p\n", &value1);
	printf("The address stored in dPtr is: %p", dPtr);

	return 0;
}