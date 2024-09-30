#include<stdio.h>

int main(void) {

	int n[1] = { 0 };
	int b[9] = { 0 };
	float a;
	int x = 200, y = 299;

	while (n[0] >= 0) {
		printf("Enter the gross sales (-1 to end): ");
		scanf_s("%d", &n[0]);

		if (n[0] == -1) {
			break;
		}

		a = n[0] * 0.09 + 200;
		printf("The salary is: %d\n", int(a));
		n[0] = a;

		if (200 <= n[0] && n[0] <= 299) {
			++b[0];
		}
		if (300 <= n[0] && n[0] <= 399) {
			++b[1];
		}
		if (400 <= n[0] && n[0] <= 499) {
			++b[2];
		}
		if (500 <= n[0] && n[0] <= 599) {
			++b[3];
		}
		if (600 <= n[0] && n[0] <= 699) {
			++b[4];
		}
		if (700 <= n[0] && n[0] <= 799) {
			++b[5];
		}
		if (800 <= n[0] && n[0] <= 899) {
			++b[6];
		}
		if (900 <= n[0] && n[0] <= 999) {
			++b[7];
		}
		if (n[0] >= 1000) {
			++b[8];
		}
	}
	printf("%s%13s\n", "Range", "Amount");

	for (size_t i = 0; i < 8; i++) {
		printf("%d-%d", x, y);
		printf("%11d\n", b[i]);
		x += 100;
		y += 100;
	}
	printf("1000-%13d", b[8]);
	return 0;
}