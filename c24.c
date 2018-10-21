#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Declaration variables
    int nbRandom = 0;
    int nbEntree = 0;
    int nbCoup = 0;
    const int nbMin = 1;
    const int nbMax = 100;

    //Generation nombre aleatoire
    srand(time(NULL));
    nbRandom = (rand() % (nbMax - nbMin - 1)) + nbMin;

    printf("Jeu du plus ou moins!\n");

    do {
        //Saisi nb
        printf("Quel est le nombre mystere ? <1..100>");
        scanf("%d",&nbEntree);

        nbCoup++;

        //Affichage
        if (nbEntree < nbRandom) {
            printf("C'est plus!\n");
        } else if (nbEntree > nbRandom) {
            printf("C'est moins!\n");
        } else {
            printf("Vous avez trouve!\n");
            printf("Nombre de coup: %d",nbCoup);
        }
    } while(nbEntree != nbRandom); //nbEntree différent de nbRandom

    return 0;
}
