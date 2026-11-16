/*

Exercice 1 : premier pointeur

Déclarer un entier age qui vaut 20 et un pointeur p qui 
pointe sur age. Afficher la valeur de age, son adresse, 
la valeur de p et la valeur pointée par p. 
Ensuite, passer age à 21 en passant par p, puis réafficher 
age.

*/

#include <stdio.h>

int main()
{
    int age = 20;
    int *p = &age;

    printf("age = %d\n", age);
    printf("adresse de age = %p\n", &age);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    *p = 21;
    printf("age vaut maintenant %d\n", age);

    return 0;
}