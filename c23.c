#include <stdio.h>
#include <stdlib.h>

//On vous demande de créer un programme qui affiche la table de multiplication d’un nombre entier quelconque.

int main()
{
    //Declaration variable
    int nbTable = 0;
    int calcul = 0;
    int i = 0;

    //Saisi
    printf("Choississez un nombre: ");
    scanf("%d",&nbTable);

    printf("Table de %d\n",nbTable);

    //boucle for
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = ",nbTable,i);
        calcul = nbTable * i;
        printf("%d\n",calcul);
    }
}
