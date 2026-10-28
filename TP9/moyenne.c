#include <stdio.h>

int main(void) {
	float moyenne;

	printf("Entrez votre moyenne: ");
	scanf("%f", &moyenne);

	if (moyenne > 0 && moyenne < 12) {
		printf("Pas de mention.");
	} else if (moyenne >= 12 && moyenne < 14) {
		printf("Assez bien.");
	} else if (moyenne >= 14 && moyenne < 16) {
		printf("Bien.");
	} else if (moyenne >= 16 && moyenne < 18) {
		printf("Très bien.");
	} else if (moyenne >= 18 && moyenne <= 20) {
		printf("Excellent.");
	} else {
		printf("Moyenne incorrecte.");
	}


	return 0;
}