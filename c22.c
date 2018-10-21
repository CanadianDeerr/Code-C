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
    
    //Saisi
    printf("Saisir une longueur: ");
    scanf("%d",&longueur);
    
    //Boucle for
    for (i = 0; i < longueur; i++) {
        printf("#");
    }
}
