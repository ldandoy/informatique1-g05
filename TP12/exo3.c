/*

Exercice 3 : une fonction qui « renvoie » deux résultats

Écrire une fonction divisionEuclidienne qui reçoit deux entiers a et b et 
fournit à la fois le quotient et le reste. 
Un return ne peut renvoyer qu’une seule valeur, il faut donc trouver une 
autre solution.

*/

#include <stdio.h>

void divisionEuclidienne(int a, int b, int *quotient, int *reste)
{
    *quotient = a / b;
    *reste = a % b;
}

int main()
{
    int a, b, q, r;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    divisionEuclidienne(a, b, &q, &r);
    printf("%d = %d x %d + %d\n", a, b, q, r);

    return 0;
}