#include <stdio.h>

int main() {
	
	double pi;
	int i;
	for (i = 0; i < 15000; ++i) {
		pi = pi + (pow(-1, i) / (2 * i + 1));
	}
	
	pi *= 4;
	printf("PI = %f\n", pi);
	
	return 0;
}