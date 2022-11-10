#include <stdio.h>

int main(void) {
	float num_of_cups;

	printf("Enter number of cups: ");
	scanf("%f", &num_of_cups);

	printf("Pints: %.2f\n", num_of_cups / 2);
	printf("Ounces: %.2f\n", num_of_cups * 8);
	printf("Big spoons: %.2f\n", num_of_cups * 8 * 2);
	printf("Small spoons: %.2f\n", num_of_cups * 8 * 2 * 3);
	
	return 0;
}

