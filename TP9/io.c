c getChar (void) {
	char c;

	while(1) {
		if (scanf("%c", c); != 1) {
			printf("Fin de l'entrée (EOF)");
		}
	}
	return c;
}

int main(void) {
	printf("Entrez un caractère:");
	c = getChar();
	printf("Vous avez entrez: %c", c)
}