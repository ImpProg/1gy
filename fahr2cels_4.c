#include <stdio.h>
#define FAHR2CELS(c) (5. / 9) * (c - 32)

int main() {
	int value;
	for (value = -40; value <= 100; value += 10) {
		printf("%3d Cels = %4.2f Fahr\n", value, FAHR2CELS(value));
	}
}