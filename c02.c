#include <stdio.h>
#include <stdlib.h>

//On vous demande de créer un programme capable de lire trois nombres réels puis de calculer la somme et la moyenne de ces nombres.

int main()
{
    //Declaration var
    double nb1 = 0;
    double nb2 = 0;
    double nb3 = 0;
    double somme = 0;
    float moyenne = 0;
    int i = 0;

    //Saisi des nombres
    printf("Saissir le premier nombre:\n");
    scanf("%lf",&nb1);
    printf("Saissir le second nombre:\n");
    scanf("%lf",&nb2);
    printf("Saissir le troisieme nombre:\n");
    scanf("%lf",&nb3);
    printf("\n");

    //Calcul de la somme et moyenne
    somme = nb1+nb2+nb3;
    moyenne = somme/3;

    //Affichage des reultats
    printf("--- Resultats ---\n");
    printf("Le premier nombre est: %.2lf\n",nb1);
    printf("le second nombre est: %.2lf\n",nb2);
    printf("Le troisieme nombre est: %.2lf\n",nb3);
    printf("La somme est: %.2lf\n",somme);
    printf("La moyenne est de %.2lf\n\n",moyenne);

    for(i=0; i<3; i++) {
        printf("You're a genius!\n");
    }

    return 0;
}

/*
1. Qu’est ce que le mode debug ?
2. Si je saisis -5 comme note, est ce que ça marche? Si non, pourquoi?
3. Si je saisis “2,5” comme note, est ce que ça marche? Si non, pourquoi?
4. Est ce que je peux saisir quatre notes? Si non, quelle est la solution ?



1. Cela sert a execute le programme pas a pas
2. Oui cela fonctionne
3. Non, car 2.5 n'est pas un entier
4. Non car je n'ai pas fait en sorte de pouvoir en rentrer 4 mais 3. Il suffit de rajouter les lignes correspondantes pour permettre d'en rentrer une autre
*/
