//HW4_1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	srand(time(NULL));

	int t;

	printf("Passwords are: ");

	for (t = 0; t < 6; t++) {

		printf("%c", 33 + (rand() % 94));

	}

	return 0;

}