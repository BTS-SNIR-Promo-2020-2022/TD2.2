#include <stdlib.h>
#include <stdio.h>

void main() {
	int k = 0;
	for (int i = 1;i < 11;i++) {
		for (int j = 0;j < 1000;j++) {
			if (j % i == 0 && k < 10) {
				k++;
				printf("%d ", j);
			}
		}
		k = 0;
		printf("\n");
	}
}