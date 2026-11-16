#include <stdio.h>
#include "bonjour.h"


int main(void) {
	int n = -1;

	printf("Combien de foit voulez vous dire bonjour ?");
	scanf("%d", &n);

	dire_bonjour(n);

	return 0;
}
