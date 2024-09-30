#include<stdio.h>
#define SIZE 10

int main(void) {

	int oddNum[SIZE] = { 1,3,5,7,9,11,13,15,17,19 };
	int* iPtr;

	printf("Array index notation\n");
	for (size_t i = 0; i < SIZE; i++) {
		printf("oddNum[%u]=%d\n", i, oddNum[i]);
	}

	iPtr = oddNum;
	iPtr = &oddNum[0];

	printf("Pointer/offset notation\n");
	for (size_t offset = 0; offset < SIZE; ++offset) {
		printf("*(oddNum+%u)=%d\n", offset, *(oddNum + offset));
	}

	printf("Pointer/offset notation with the array name as the pointer\n");
	for (size_t offset = 0; offset < SIZE; ++offset) {
		printf("*(iPtr+%u)=%d\n", offset, *(iPtr + offset));
	}

	printf("\n");
	printf("oddNum[3]=%d\n", oddNum[3]);
	printf("*(oddNum+3)=%d\n", *(oddNum + 3));
	printf("iPtr[3]=%d\n", iPtr[3]);
	printf("*(iPtr+3)=%d\n", *(iPtr + 3));

	printf("The address of iPtr+5 is: %p\n", iPtr + 5);
	printf("The value of iPtr+5 is: %d\n", *(iPtr + 5));

	iPtr = &oddNum[9];
	printf("The address of iPtr-3 is: %p\n", iPtr - 3);
	printf("The value of iPtr-3 is: %d\n", *(iPtr - 3));

	return 0;
}