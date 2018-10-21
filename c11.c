#include <stdio.h>
#include <stdlib.h>
/*
On vous demande de cr�er un programme capable de d�teminer l��tat de l�eau (solide, liquide, gazeux)� partir de sa temp�rature en degr�s.
L��tat est d�termin� arbitrairement par le tableau suivant.
<0 :solide
>=0 et <100 :liquide
>= 100 : gazeux
*/

int main()
{
    //Declaration variable
    float nb = 0;

    //Saisi
    printf("Saissi de la temperature: ");
    scanf("%f",&nb);

    //Affichage
    printf("temperature: %.2f\n",nb);

    //Determination de l'etat de l'eau
    if (nb < 0) {
        printf("Etat solide");
    } else if (nb >= 0 && nb <100) {
        printf("Etat liquide");
    } else if (nb >= 100) {
        printf("Etat gazeux");
    }

    return 0;
}
