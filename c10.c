#include <stdio.h>
#include <stdlib.h>

//On vous demande de créer un programme capable de déteminer si un nombre est pair ou impair.

int main()
{
    //Declaration variable
    int nb = 0;

    //Saisi
    printf("Saisir un nombre: ");
    scanf("%d",&nb);

    //Modulo nb + Affichage
    if (nb%2 == 0) {
        printf("Nombre pair");
    } else {
        printf("Nombre impair");
    }

    return 0;
}
