#include<stdio.h>

long int addNumbers(long int numList[], size_t size);

long int addNumbers(long int numList[], size_t size) {

	long int sum;

	for (size_t i = 0; i < size; i++) {
		sum = sum + numList[i];
	}
	return sum;
}