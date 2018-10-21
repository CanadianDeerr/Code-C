#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration variables
    int nombre, minimum = 0;

    //Boucle
    for(int i=0;i<3;i++)
    {
        //Saisi
        printf("Taper un entier: ");
        scanf("%d",&nombre);

        //Si minim est a 0 le nombre sera minimum
        if (minimum == 0)
        {
            minimum = nombre;
        }
        //Sinon si mon nombre est inferieur au minimum le minimum est le dernier nombre saisi
        else
        {
            if(nombre < minimum)
            {
                minimum = nombre;
            }
        }

    }
    //Affichage
    printf("Le nombre le plus petit est: %d",minimum);

    return 0;
}
