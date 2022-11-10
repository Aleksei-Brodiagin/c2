#include <stdio.h>

int main(void) {
	int years;
	double sec_per_year = 3.156e7;

	printf("Enter your age: ");
	scanf("%d", &years);

	printf("Your age is %.0f seconds.\n", years * sec_per_year);

	return 0;
}

