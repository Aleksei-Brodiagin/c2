#include <stdio.h>

int main(void) {
	double molecular_water_weight = 3.156e-23;
	double quart_water_volume = 950;

	int quarts;
	printf("Enter quarts of water: ");
	scanf("%d", &quarts);
	
	printf("Number of moleculus is: %.0f\n", quarts * quart_water_volume / molecular_water_weight);

	return 0;
}

