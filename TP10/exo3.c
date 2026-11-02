// Exercice 3 : Afficher un menu en boucle, jusqu’à ce que 
// l’utilisateur choisisse de quitter :


#include <stdio.h>

int main()
{
    int choix = -1, nombre, testuser;

    while (choix != 0)
    {
        // while(scanf("%d", &choix) != 1){
        //     printf("Erreur: entrez un entier");

        //     while (getchar() != "\n");

        //     printf("Votre choix :");
        // };

        do {
            printf("\n1 - Dire bonjour\n");
            printf("2 - Calculer le carre d'un nombre\n");
            printf("0 - Quitter\n");
            printf("Votre choix : ");

            testuser = scanf("%d", &choix);

            if (testuser != 1) {
                printf("Erreur: entrez un entier");
            }
        } while (testuser != 1);

        if (choix == 1)
            printf("Bonjour !\n");
        else if (choix == 2)
        {
            printf("Entrez un nombre : ");
            scanf("%d", &nombre);
            printf("%d au carre = %d\n", nombre, nombre * nombre);
        }
        else if (choix != 0)
            printf("Choix invalide\n");
    }

    printf("Au revoir !\n");

    return 0;
}