#include <stdio.h>

void affiche (float *moyenne) {
	// *moyenne = 45;
	*moyenne += 20;
	printf("Ma moyenne: %f %p\n", *moyenne, moyenne);
}


int main() {
	float moyenne = 15;

	affiche(&moyenne);
	printf("%f\n", moyenne);

	return 0;
}