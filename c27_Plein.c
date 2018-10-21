//
//  main.c
//  c27
//
//  Created by Corentin Bringer on 24/09/2018.
//  Copyright © 2018 Corentin Bringer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Declaration varaible
    int taille_x, taille_y, x, y = 0;
    
    //Saisi largeur
    printf("Entrez la largeur du rectangle : ");
    scanf("%d",&taille_x);
    
    //Saisi hauteur
    printf("Entrez la hauteur du rectangle : ");
    scanf("%d",&taille_y);
    
    printf("\n\n");
    
    //Dessine un rectangle plein
    for(y = 0; y < taille_y; y++) {
        for(x = 0; x < taille_x; x++) {
            printf("#");
        }
        printf("\n");
    }
    
    printf("\n\n");
}
