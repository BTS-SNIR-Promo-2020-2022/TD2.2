#include <stdlib.h>
#include <stdio.h>

void main() {
	int j = 0;
	for (int i = 0;i < 10000;i++) {
		if (i % 5 == 0 && j<10) {
			printf("%d ", i);
			j++;
		}
	}
	
}