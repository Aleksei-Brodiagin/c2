#include <stdio.h>

int main(void) {
	double num;
	printf("Enter the number: ");
	scanf("%lf", &num);

	printf("Fixed: %f\n", num);
	printf("Exp: %e\n", num);
	printf("Hex-exp: %a\n", num);

	return 0;
}

