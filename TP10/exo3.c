// Exercice 3 : Afficher un menu en boucle, jusqu’à ce que 
// l’utilisateur choisisse de quitter :


#include <stdio.h>

int main()
{
    int choix = -1, nombre;

    while (choix != 0)
    {
        printf("\n1 - Dire bonjour\n");
        printf("2 - Calculer le carre d'un nombre\n");
        printf("0 - Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

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