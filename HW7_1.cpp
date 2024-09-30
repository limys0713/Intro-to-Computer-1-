#include<stdio.h>
#define phonenumber 10
#define searcharray 10

//function prototypes
size_t binarySearch(const int c[], int searchkey, size_t low, size_t high);

int main(void) {

	int a[phonenumber] = { 0,9 };
	int b[searcharray];
	int result[10] = { 0 };
	unsigned long int d=0;

	//insert 0-9 in array b for the use of binary search
	for (size_t x = 0; x < searcharray; x++) {
		b[x] = x;
	}
	while (d <= 900000000 || d >= 999999999) {
		printf("Enter the phone number: ");
		scanf_s("%lu", &d);
		printf("\n");
	}
		if (d >= 900000000 && d <= 999999999) {

			for (size_t x = 9; x > 1; x--) {
				a[x] = d % 10;
				d /= 10;
			}


			for (size_t x = 2; x < phonenumber; x++) {
				result[x] = binarySearch(b, a[x], 0, phonenumber - 1);	//search for a[x] in array b
			}
			//display results

			printf("The phone number is: %d%d", a[0], a[1]);
			for (size_t x = 2; x < phonenumber; x++) {
				if (result[x] != -1) {
					printf("%d", result[x]);
				}
				else {
					printf("Not found");
				}
			}
		}
	return 0;
}

size_t binarySearch(const int c[], int searchkey, size_t low, size_t high) {

	int middle;

	while (low <= high) {

		middle = (low + high) / 2;

		if (searchkey == c[middle]) {
			return middle;
		}
		else if (searchkey < c[middle]) {	//set new high
			high = middle - 1;
		}
		else {								//set new low
			low = middle + 1;
		}
	}

	return -1;
}