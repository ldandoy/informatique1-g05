#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void afficher_hero(int life, int gold, int xp, int nb_potion, int level) {
    printf("Votre héro:\n");
    printf("Point de vie: %d\n", life);
    printf("Or: %d\n", gold);
    printf("Expérience: %d\n", xp);
    printf("Nombre de potion: %d\n", nb_potion);
    printf("Niveau: %d\n", level);

    printf("\n");
}

void boire_potion(int *life, int *nb_potion) {
    if (*nb_potion>0) {
        *nb_potion = *nb_potion-1;

        if (*life >= 70) {
            *life = 100;
        } else {
            *life = *life + 30;
        }
        printf("Vous avez bu une potion !");
    } else {
        printf("Plus de potion !");
    }
}

void combattre(int *gold, int *life, int *choix, int *xp , int *level) {
    int degat = (rand() % (30 - 15 + 1)) + 15;
    *life = *life - degat;
    printf("Vous prenez %d dégats !\n", degat);

    if (*life>0) {
        *gold = *gold + 10;
        *xp = *xp+40;

        if (*xp>=100) {
            *xp = *xp-100;
            *level = *level+1;
            printf("Niveau supérieur !\n");
        }

        printf("Vous avez gagné !\n");
    } else {
        printf("Votre héro est mort !\n");
        *choix = 0;
    }
}

int acheter_potion(int *nb_potion, int *gold) {
    if (*gold-15 >= 0) {
        *gold = *gold-15;
        *nb_potion = *nb_potion+1;
        return 1;
    } else {
        return 0;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand((unsigned int)time(NULL));
    system("clear"); // system("cls"); pour windows

    int life=100, gold=50, xp=0, nb_potion=1, level=1;
    int choix = -1;

    do {
        afficher_hero(life, gold, xp, nb_potion, level);

        printf("Que voulez-vous faire ?\n");
        printf("1- Combattre\n");
        printf("2- Boire une potion\n");
        printf("3- Acheter une potion\n");
        printf("0- Quitter\n");

        scanf("%d", &choix);

        switch(choix) {
            case 0:
                printf("Au revoir !\n");
                break;
            case 1:
                combattre(&gold, &life, &choix, &xp, &level);
                printf("Combat terminé !\n");
                break;
            case 2:
                boire_potion(&life, &nb_potion);
                break;
            case 3:
                if(acheter_potion(&nb_potion, &gold) == 1) {
                    printf("Potion achetée !\n");
                } else {
                    printf("Pas assez d’or !\n");
                }
                break;
            default:
                printf("Mauvais choix !\n");
                break;
        }

        printf("\n");

        getchar();
        getchar();
        system("clear");
    } while(choix != 0);

    return 0;
}