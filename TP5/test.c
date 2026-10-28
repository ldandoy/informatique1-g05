#include <stdio.h>

int main(void) {
	int a = 30, m = 5, b = 30, n = 1;
	int c = 30, o = 7;

	a -= m > 3;
	b -= n > 3;
	c =- o > 3;
	
	printf("Le resultat est %d\n", a);
	printf("Le resultat est %d\n", b);
	printf("Le resultat est %d", c);


	return 0;
}