//HW2(2)
#include<stdio.h>
int main(void) {

	double x=4;
	double pi = 3.14;
	int series = 0;
	int i = 0;
	
	
	while (i >= 0) {
		
		if (x - pi < 0.01 && x - pi >= 0) {

			printf("%.2f\t%d", pi, series + 1);
			break;
		}

		if (i % 2 == 0) {
			x=x - (double)4 / ((double)i * 2 + 3);
		}
		else{
			x=x + (double)4 / ((double)i * 2 + 3);
		}
		
		series += 1;
		i += 1;
	}

	 x = 4;
	 pi = 3.141;
	 series = 0;
	 i = 0;

	while (i >= 0) {

		if (x - pi < 0.001 && x - pi >=0 ) {

			printf("\n%.3f\t%d", pi, series + 1);
			break;
		}

		if (i % 2 == 0) {
			x = x - (double)4 / ((double)i * 2 + 3);
		}
		else {
			x = x + (double)4 / ((double)i * 2 + 3);
		}

		series += 1;
		i += 1;
	}

	x = 4;
	pi = 3.1415;
	series = 0;
	i = 0;

	while (i >= 0) {

		if (x - pi < 0.0001 && x - pi >= 0) {

			printf("\n%.4f\t%d", pi, series + 1);
			break;
		}

		if (i % 2 == 0) {
			x = x - (double)4 / ((double)i * 2 + 3);
		}
		else {
			x = x + (double)4 / ((double)i * 2 + 3);
		}

		series += 1;
		i += 1;
	}

	x = 4;
	pi = 3.14159;
	series = 0;
	i = 0;

	while (i >=0) {

		if (x - pi < 0.00001 && x - pi >= 0) {

			printf("\n%.5f\t%d", pi, series + 1);
			break;
		}

		if (i % 2 == 0) {
			x = x - (double)4 / ((double)i * 2 + 3);
		}
		else {
			x = x + (double)4 / ((double)i * 2 + 3);
		}

		series += 1;
		i += 1;
	}
	
	return 0;
}