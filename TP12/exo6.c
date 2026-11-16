/*

Exercice 6 : qu’affiche ce programme ?

Sans l’exécuter, donner ce qu’affiche ce programme. Faire un schéma des cases mémoire et des flèches à chaque ligne.

#include <stdio.h>

int main()
{
    int u = 3, v = 8;
    int *p = &u;
    int *q = &v;

    *p = *p + 2;
    q = p;
    *q = *q * 10;
    p = &v;
    *p = *q + 1;

    printf("u = %d, v = %d, *p = %d, *q = %d\n", u, v, *p, *q);

    return 0;
}

*/
























Réponse : u = 50, v = 51, *p = 51, *q = 50

Ligne	        Effet	                        u	v	p pointe sur	q pointe sur
départ		                                    3	8	u	        v
*p = *p + 2	    u devient 5	                    5	8	u	        v
q = p	        q pointe maintenant sur u	    5	8	u	        u
*q = *q * 10	u devient 50	                50	8	u	        u
p = &v	        p pointe maintenant sur v	    50	8	v	        u
*p = *q + 1	    v devient 50 + 1	            50	51	v	        u