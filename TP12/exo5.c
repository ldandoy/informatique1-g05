/*

Exercice 5 : un retrait qui peut échouer

On reprend la banque. Écrire une fonction retirer qui reçoit l’adresse du solde et un montant. Si le retrait est possible, elle met à jour le solde. 
Le main doit pouvoir savoir si le retrait a réussi, pour afficher « Retrait effectué » ou « Retrait refusé ».

*/








































#include <stdio.h>

int retirer(float *solde, float montant)
{
    if (montant <= 0 || montant > *solde)
        return 0;

    *solde = *solde - montant;
    return 1;
}

int main()
{
    float solde = 100, montant;

    printf("Montant a retirer : ");
    scanf("%f", &montant);

    if (retirer(&solde, montant))
        printf("Retrait effectue\n");
    else
        printf("Retrait refuse\n");

    printf("Solde : %.2f euros\n", solde);

    return 0;
}