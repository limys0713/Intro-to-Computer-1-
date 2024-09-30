//HW4_2
#include<stdio.h>
#include<stdlib.h>

int main(void) {


	long int a;
	unsigned int b;
	unsigned int t;
	unsigned int totalfrequency = 6;
	unsigned int frequency1 = 0;
	unsigned int frequency2 = 0;
	unsigned int frequency3 = 0;
	unsigned int frequency4 = 0;
	unsigned int frequency5 = 0;
	unsigned int frequency6 = 0;


	printf("Total frequency%14s%14s%14s%14s%14s%14s\n", "Face 1", "Face 2", "Face 3", "Face 4", "Face 5", "Face 6");

	for (b = 1; b < 10; b++) {


		for (a = 0; a < totalfrequency; a++) {

			t = 1 + (rand() % 6);

			switch (t) {

			case 1:
				frequency1++;
				break;
			case 2:
				frequency2++;
				break;
			case 3:
				frequency3++;
				break;
			case 4:
				frequency4++;
				break;
			case 5:
				frequency5++;
				break;
			case 6:
				frequency6++;
				break;
			}
		}

		printf("%15u", totalfrequency);
		printf("%14.10f", double(frequency1) / double(totalfrequency));
		printf("%14.10f", double(frequency2) / double(totalfrequency));
		printf("%14.10f", double(frequency3) / double(totalfrequency));
		printf("%14.10f", double(frequency4) / double(totalfrequency));
		printf("%14.10f", double(frequency5) / double(totalfrequency));
		printf("%14.10f\n", double(frequency6) / double(totalfrequency));

		totalfrequency *= 10;
		frequency1 = 0;
		frequency2 = 0;
		frequency3 = 0;
		frequency4 = 0;
		frequency5 = 0;
		frequency6 = 0;
	}
	return 0;
}
