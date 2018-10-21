#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration varibales
    int nbChoix = 0;
    float temperature = 0;
    float calcul = 0;

    //Choix
    printf("1. Celcius -> Farhenheit\n");
    printf("2. Farhenheit -> Celcius\n");
    scanf("%d",&nbChoix);

    switch(nbChoix) {
    //nbChoix == 1
    case 1 :
        //Saisi celcius + calcul en farhenheit
        printf("Saisir les Celcius: ");
        scanf("%f",&temperature);
        calcul = (temperature*1.8) + 32;
        printf("Resultat: %.2f F",calcul);
        break;
    //nbChoix == 2
    case 2 :
        //Saisi farhenheit + calcul en celcius
        printf("Saisir les Farhenheit: ");
        scanf("%f",&temperature);
        calcul = (temperature - 32) / 1.8;
        printf("Resultat: %.2f C",calcul);
        break;
    default:
        //Erreur si mauavaise entree
        printf("Mauvaise entree");
    }

    return 0;
}
