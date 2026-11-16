#include <stdio.h>


void saisirBornes(int *a,int *b) {
	do {
		printf("saisir un nombre A entier positif: ");
		scanf("%d", a);

		printf("saisir un nombre B entier positif: ");
		scanf("%d", b);

		// printf("%d, %d\n", *a ,*b);

	} while(0>*a || *a>*b);
	
}

int main(void) {
	int a, b;

	saisirBornes(&a,&b);

	printf("A: %d et B: %d", *&a, b);
	
	return 0;
}