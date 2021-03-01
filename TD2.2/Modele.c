#include <stdlib.h>
#include <stdio.h>

void main() {
	float note_saisie = 0;
	float raw_notes[100];
	float notes[100];
	int nb_notes=0;
	int numero=0;
	for (int i = 0;i < 100;i++) {
		raw_notes[i]=-23;
	}
	while (raw_notes[numero] == -23) {
		printf("Saisir une nouvelle note:\n");
		scanf("%f", &note_saisie);
		raw_notes[numero] = note_saisie;
		if (raw_notes[numero]>=0 && raw_notes[numero]<=20) {
			numero++;
		}
		else {
			break;
		}
	}
	for (int i = 0;i < 100;i++) {
		if (raw_notes[i] != -23 && raw_notes[i] >= 0 && raw_notes[i] <= 20) {
			notes[i] = raw_notes[i];
			nb_notes++;
		}
		else {
			notes[i] = 0;
		}
	}
	for (int i = 0;i < nb_notes;i++) {
		printf("%f\n", notes[i]);
	}
	printf("J'ai enregistre %d notes !\n", nb_notes);
	float moyenne=notes[0];
	for (int i = 0;i < nb_notes;i++) {
		moyenne += notes[i+1];
	}
	moyenne = moyenne / nb_notes;
	printf("La moyenne est de %f/20 !\n",moyenne);
	if (moyenne >= 14) {
		printf("Très bien !\n");
	}
	else if (moyenne >= 12 && moyenne < 14) {
		printf("Bien !\n");
	}else if(moyenne >= 10 && moyenne <12){
		printf("Passable !\n");
	}
	else {
		printf("Nul !\n");
	}
}