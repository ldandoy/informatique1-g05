#include <stdio.h>

int main(void) {
	int year = 0;

	printf("Entrez une annee: ");
	scanf("%d", &year);

	if ( ( !(year%4) && (year%100)) || !(year % 400) )  {
		printf("L'annee %d est bissextile", year);
	} else {
		printf("L'annee %d n'est pas bissextile", year);
	}

	return 0;
}