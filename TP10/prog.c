#include <stdio.h>

void afficherMenu()
{
    printf("\n===== MA BANQUE =====\n");
    printf("1 - Consulter le solde\n");
    printf("2 - Deposer de l'argent\n");
    printf("3 - Retirer de l'argent\n");
    printf("0 - Quitter\n");
    printf("Votre choix : ");
}

void afficherSolde(float solde)
{
    printf("Votre solde est de %.2f euros\n", solde);
}

float deposer(float solde, float montant)
{
    if (montant <= 0)
    {
        printf("Montant invalide\n");
        return solde;
    }
    return solde + montant;
}

float retirer(float solde, float montant)
{
    if (montant <= 0)
        printf("Montant invalide\n");
    else if (montant > solde)
        printf("Solde insuffisant\n");
    else
        solde = solde - montant;
    return solde;
}

int main()
{
    float solde = 0, montant;
    int choix = -1;

    while (choix != 0)
    {
        afficherMenu();
        scanf("%d", &choix);

        if (choix == 1)
            afficherSolde(solde);
        else if (choix == 2)
        {
            printf("Montant a deposer : ");
            scanf("%f", &montant);
            solde = deposer(solde, montant);
            afficherSolde(solde);
        }
        else if (choix == 3)
        {
            printf("Montant a retirer : ");
            scanf("%f", &montant);
            solde = retirer(solde, montant);
            afficherSolde(solde);
        }
        else if (choix != 0)
            printf("Choix invalide\n");
    }

    printf("Au revoir !\n");
    return 0;
}