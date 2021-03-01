#include <stdlib.h>
#include <stdio.h>

void main() {
	float max = 400000;
	float actuel = 0.1;
	int pliures = 0;
	while (actuel < max) {
		actuel = actuel *2;
		pliures++;
	}
	printf("Il aura fallu %d pliures pour passer d'une feuille de 0,1mm a 400m.", pliures);
}