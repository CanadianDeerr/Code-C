//
//  main.c
//  c27
//
//  Created by Corentin Bringer on 24/09/2018.
//  Copyright © 2018 Corentin Bringer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Declaration variable
    int i = 0;
    int longueur = 0;
    int longueur2 = 0;

    //Saisi
    printf("Saisir une longueur: ");
    scanf("%d",&longueur);

    printf("[");
    longueur2 = longueur / 2;
    //Boucle for
    for (i = 0; i < longueur2; i++) {
        printf("# ");
    }
    //Affiche du pointille supp pour les nombres impairs
    if(longueur % 2 == 1) {
        printf("#");
    }
    printf("]");

    return 0;
}
