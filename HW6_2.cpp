#include <stdio.h>

const int SIZE = 10;

int main(void) {

	float M1[SIZE], M2[SIZE], M3[20];
	int i, k, j;
	int a = 0;
	int b = 0;

	for (i = 0; i < SIZE; i++) {
		printf("Enter element of Array 1: ");
		scanf_s("%f", &M1[i]);
	}

	for (i = 0; i < SIZE; i++) {
		printf("Enter element of Array 2: ");
		scanf_s("%f", &M2[i]);
	}

	for (i = 0; i < SIZE; i++) {             //check whether inside the array 1 has 0
		if (M1[i] == 0) {
			a += 1;
		}
	}

	for (i = 0; i < SIZE; i++) {            //check whether inside the array 2 has 0
		if (M2[i] == 0) {
			 b += 1;
		}
	}

	printf("M1={");		//print the first array that inserted
	for (i = 0; i < SIZE; i++) {
		printf("%f", M1[i]);
		if (i < 9) {
			printf(",");
		}
	}printf("}\n");

	printf("M2={");		//print the second array that inserted
	for (i = 0; i < SIZE; i++) {
		printf("%f", M2[i]);
		if (i < 9) {
			printf(",");
		}
	}printf("}\n");


	for (i = 0; i < SIZE; i++) {

		for (k = i + 1; k < SIZE; k++) {
			if (M1[i] == M1[k]) {
				M1[i] = 0;
			}
		}
		M3[i] = M1[i];
	}
	printf("The unique number in array 1 is: ");
	if (a != 0) {
		printf("0.000000 ");
	}
	for (j = 0; j < SIZE; j++) {
		if (M1[j] != 0) {
			printf("%f ", M1[j]);
		}
	}
	printf("\n");


	for (i = 0; i < SIZE; i++) {

		for (k = i + 1; k < SIZE; k++) {
			if (M2[i] == M2[k]) {
				M2[i] = 0;
			}
		}
		M3[i+10] = M2[i];
	}
	printf("The unique number in array 2 is: ");
	if (b != 0) {
		printf("0.000000 ");
	}
	for (j = 0; j < SIZE; j++) {
		if (M2[j] != 0) {
			printf("%f ", M2[j]);
		}
	}printf("\n");


	if (a != 0 || b != 0) {
		printf("The anwer is :\n0.000000 ");
	}


	for (i = 0; i < 20; i++) {

		for (k = i + 1; k < 20; k++) {
			if (M3[i] == M3[k]) {
				M3[i] = 0;
			}
		}
	}
	for (j = 0; j < 20; j++) {
		if (M3[j] != 0) {
			printf("%f ", M3[j]);
		}
	}

	return 0;
}
