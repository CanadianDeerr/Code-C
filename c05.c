//
//  main.c
//  c05
//
//  Created by Corentin Bringer on 15/09/2018.
//  Copyright © 2018 Corentin Bringer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Declaration variables
    int numChoix = 0;
    float nbMetres = 0;
    float pied = 0;

    printf("Veuillez faire votre choix avec le numero: \n");
    printf("1. Convertir des metres en pieds\n");
    printf("2. Convertir des pieds en metres\n");
    scanf("%d",&numChoix);

    if (numChoix == 1) {
        //Saisi longueur
        printf("Saisir une longueur en metre: ");
        scanf("%f",&nbMetres);

        //Convertion metre en pied
        printf("Metres: %.2f\n",nbMetres);
        pied = nbMetres *  3.2808399;
        printf("Pieds: %.2f",pied);

    } else if (numChoix == 2) {
        //Saisi longueur
        printf("Saisir une longueur en pied: ");
        scanf("%f",&pied);

        //Convertion pied en metre
        printf("Pieds: %.2f\n",pied);
        nbMetres = pied /  3.2808399;
        printf("Metres: %.2f",nbMetres);

    }

    return 0;
}
