//
//  main.c
//  c15
//
//  Created by Corentin Bringer on 23/09/2018.
//  Copyright © 2018 Corentin Bringer. All rights reserved.
//
/*
 On vous demande de créer un programme capable de donner le nom du jour (lundi...dimanche)à partir de son numéro dans l’année 2015.
 Par exemple, « 36 » ( 36 ième jour de l’année) doit retourner « jeudi » et « 81 » doit retourner « dimanche ».
 Si le numéro est inférieur à 1 ou supérieur à 365, une erreur doit être générée.
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Declaration de variable
    int nbJour = 0;

    //Saisi jour
    printf("Veuillez saisir le numero d'un jour: ");
    scanf("%d",&nbJour);

    //On regarde si c'est < a 1 ou > a 365
    if (nbJour < 1 || nbJour > 365) {
        printf("Veuillez saisir un jour entre 1 et 365");
    } else {
        //On fait le modulo pour trouver le jour
        switch (nbJour % 7) {
            case 0:
                printf("C'est un mercredi");
                break;
            case 1:
                printf("C'est un jeudi");
                break;
            case 2:
                printf("C'est un vendredi");
                break;
            case 3:
                printf("C'est un samedi");
                break;
            case 4:
                printf("C'est un dimanche");
                break;
            case 5:
                printf("C'est un lundi");
                break;
            case 6:
                printf("C'est un mardi");
                break;

            default:
                printf("Mauvaise entree");
                break;
        }
    }

    return 0;
}
