// Exercice 2 : Demander un entier n à l’utilisateur, 
// puis afficher tous les nombres pairs de 0 à n.

#include <stdio.h>


int main()
{
    int n, i;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}