#include <stdio.h>

int main(void) {
	float sm_per_inch = 2.54;
	int growth;

	printf("Enter your growth: ");
	scanf("%d", &growth);

	printf("Your growth is %.2f inch!\n", growth / sm_per_inch);

	return 0;
}

