#include <stdio.h>
#include <stdlib.h>



int main()
{
    //Declaration variable
    int nb = 0;

    //Saisi
    printf("Saisir un nombre: ");
    scanf("%d",&nb);

    //Appel func
    tesQuoi(nb);

    return 0;
}

//Func tesQuoi pour voir si il est pair ou impair
void tesQuoi(int nb) {
    if (nb % 2 == 0) {
        printf("Nombre pair");
    } else {
        printf("Nombre impair");
    }
}
