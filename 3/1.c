#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	int num = INT_MAX;
	double f_num = DBL_MAX;
	printf("%d -> %d\n", num, num + 1);
	printf("%f -> %f\n", f_num, f_num * 100);
	
	return 0;
}

