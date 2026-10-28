#include <stdio.h>

int main(void) {
	int age = 20;
	int age1 = age;
	char initial = 'L';
	
	printf("Vous avez: %d ans\n", age);
	age1 = age + 5;
	printf("Vous avez: %d ans\n", age1);
	
	printf("Vous avez: %d ans\n", age);
	
	return 0;
}
