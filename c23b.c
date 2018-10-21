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

    //Compris entre 1 et 10 ?
    if (nbTable < 1 || nbTable > 10) {
        printf("Veuillez saisir entre 1 et 10");
    } else {
        //Affichage de la table
        printf("Table de %d\n",nbTable);

        //boucle for
        for (i = 1; i <= 10; i++) {
            printf("%d * %d = ",nbTable,i);
            calcul = nbTable * i;
            printf("%d\n",calcul);
        }
    }
}
