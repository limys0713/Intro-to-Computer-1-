//HW2(1)
#include<stdio.h>
int main(void) {

	float total=0;
	int month = 1;
	int Month = 1;

	while (month<=12) {

		printf("%s", "Enter total amount collected(-1 to quit):");
		scanf_s("%f", &total);

		if (total != -1) {
			
			printf("Enter name of month: %d\n", Month);
			printf("Total Collections:$ %.2f\n", total);
			printf("Sales:$ %.2f\n", total / 1.09);
			printf("County Sales Tax:$ %.2f\n", total / 1.09 * 0.05);
			printf("State Sales Tax:$ %.2f\n", total / 1.09 * 0.04);
			printf("Total Sales Tax Collected:$ %.2f\n\n", total / 1.09 * 0.05 + total / 1.09 * 0.04);

			Month += 1;
			month += 1;
		}
		else {
			break;
		}
	
	}
	return 0;
}