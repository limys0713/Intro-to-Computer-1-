//HW4_3
#include<stdio.h>
#include<stdlib.h>

int DNA1(int b);
int DNA2(int x);
int transcription(int y);
int translation(int z);

int main(void) {

	int a;
	int t;

	printf("%7s %6s%10s\n", "DNA", "mRNA", "Protein");

	for (a = 0; a < 30; a++) {

		t = 1 + (rand() % 4);
		printf("%4c--", DNA1(t));
		printf("%c", DNA2(t));
		printf("%6c", transcription(t));
		printf("%8c\n", translation(t));

	}

	return 0;
}
int DNA1(int b) {

	switch (b) {
	case 1:
		b = 84;
		break;
	case 2:
		b = 65;
		break;
	case 3:
		b = 67;
		break;
	case 4:
		b = 71;
		break;
	}
	return b;
}

int DNA2(int x) {

	switch (x) {
	case 1:
		x = 65;
		break;
	case 2:
		x = 84;
		break;
	case 3:
		x = 71;
		break;
	case 4:
		x = 67;
		break;
	}
	return x;
}

int transcription(int y) {

	switch (y) {
	case 1:
		y = 85;
		break;
	case 2:
		y = 65;
		break;
	case 3:
		y = 67;
		break;
	case 4:
		y = 71;
		break;
	}
	return y;
}

int translation(int z) {

	switch (z) {
	case 1:
		z = 65;
		break;
	case 2:
		z = 85;
		break;
	case 3:
		z = 71;
		break;
	case 4:
		z = 67;
		break;
	}
	return z;
}