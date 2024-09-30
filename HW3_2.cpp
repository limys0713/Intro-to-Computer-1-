//HW3_2
#include<stdio.h>

int sum(int x);

int main(void) {

	int number;

	printf("%s", "Enter an integer number:");
	scanf_s("%d", &number);

	printf("The sum of its digit is:%d",sum(number));

}

int sum(int x)
{
	int Sum = 0;
	while (x != 0) {
		Sum = Sum + x % 10;
		x = x / 10;
	}
	return Sum;
	}