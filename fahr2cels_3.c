#include <stdio.h>

int main() {
	int value;
	for (value = -40; value <= 100; value += 10) {
		printf("%3d Cels = %4.2f Fahr\n", value, (5. / 9) * (value - 32));
	}
}