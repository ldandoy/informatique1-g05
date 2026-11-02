#include <stdio.h>

void afficherMenu() {
	printf("Que voulez-vous faire ?\n");
	printf("1- Consulter son solde\n");
	printf("2- Déposer de l'argent\n");
	printf("3- Retirer de l’argent\n");
	printf("0- Quitter\n");
}

void afficherSolde(float solde) {
	printf("Votre Solde est de: %.2f Euros\n", solde);
}

float deposer(float solde, float montant) {
	if (montant > 0) {
		return (solde + montant);
	} else {
		printf("Montant invalide\n");
		return solde;
	}
}

int main (void) {
	float solde = 0, montant;
	int choix = -1;

	do {
		afficherMenu();
		scanf("%d", &choix);
		if (choix == 1) {
				afficherSolde(solde);
		} else if (choix == 2) {
			printf("Combien voulez-vous déposer: ");
			scanf("%.2f", &montant);
			solde = deposer(solde, montant);
			afficherSolde(solde);
		}
	} while (choix != 0);

	return 0;
}