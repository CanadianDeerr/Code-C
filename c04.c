//
//  main.c
//  c04
//
//  Created by Corentin Bringer on 14/09/2018.
//  Copyright © 2018 Corentin Bringer. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    //Declaration variables
    int x1, y1, x2, y2 = 0;
    float distance = 0;

    //Saissi coordonnees
    printf("Saissir x1: ");
    scanf("%d",&x1);
    printf("Saissir y1: ");
    scanf("%d",&y1);
    printf("Saissir x2: ");
    scanf("%d",&x2);
    printf("Saissir y2: ");
    scanf("%d",&y2);

    //Affichage
    printf("x1,y1: %d,%d\n",x1,y1);
    printf("x2,y2: %d,%d\n",x2,y2);

    //Calcul distance
    distance = sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2));
    printf("distance: %.2f",distance);

    return 0;
}
