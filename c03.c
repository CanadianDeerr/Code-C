#include <stdio.h>
#include <stdlib.h>

//On vous demande decréer un programmecapable delire un nombre de minuteset deleconvertiren heuresetminutes

int main() {
    //Declaration variables
    float minutes, premierCalcul, secondCalcul = 0;

    //Saissie nombres
    printf("Saissir un nombre de minutes: ");
    scanf("%f",&minutes);

    //Calcul
    premierCalcul = minutes/60;
    int u = floor(premierCalcul);
    float d = premierCalcul-u;
    secondCalcul = d * 60;

    //Affichage
    printf("\n --- Resultats ---\n");
    printf("Minutes: %.lfmin\n",minutes);
    printf("Heures minutes: %dH%.lfmin",u,secondCalcul);

    return 0;
}


/*
int main() {
     int heures, minutes, modulo = 0;

     printf("Saissir un nombre de minutes: ");
     scanf("%d),&minutes);

     heures = minutes / 60;
     modulo = minutes % 60;
     printf("%dH%dmin",heures,modulo);

     return 0;
}




1. Qu’est ce qu’un jeu detests?
2. Comment prouver qu’un programme fonctionne?
3. Est ce qu’un jeu de tests est suffisant pour prouver qu’un programme fonctionne?

1. Un test des valeurs
2. En déroulant le jeu de test
3. Non
*/
