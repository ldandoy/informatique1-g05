#include <stdio.h>

void bonjour(int count) {
	printf("Bonjour %d\n", count);
}

int main (void) {
	int count = 5;

	printf("initial count: %d\n", count);

	bonjour(1);
	bonjour(2);
	bonjour(3);

	return 0;
}