#include <stdio.h>

int main() {
	
	int i;
	for (i = 1; i <= 10; ++i) {
		
		int j;
		for (j = 1; j <= 9; ++j) {
			printf("%d * %d = %d, ", i, j, i * j);
		}
		
		printf("%d * %d = %d\n", i, 10, i * 10);
	}
	
	return 0;
}