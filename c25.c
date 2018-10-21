#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration variable
    float note = 0, moyenne, min = 21, max = -1;
    int i = 0, nbMin = 1, nbMax = 1;

    while (note != -1)
    {
        printf("Entrez une note de 0 a 20 : ");
        scanf("%f",&note);

        //Verification erreur
        if (note >= 0 && note <= 20)
        {
            //calcule moyenne 1
            moyenne = moyenne + note;
            //verification Valeur Min
            if (note <= min)
            {
                if (note == min)
                {
                    nbMin++;
                }
                else
                {
                    nbMin = 1;
                }

                min = note;
            }
            //Verification Valeur Max
            if (note >= max)
            {
                if (note == max)
                {
                    nbMax++;
                }
                else
                {
                    nbMax=1;
                }

                max = note;
            }
            i++;
        }
        else if (note == -1)
        {
            break;
        }
        else
        {
            printf("ERREUR  Pas dans l'intervalle 0 a 20\n");
        }
    }

    moyenne=moyenne/i;                          //calcule moyenne 2
    printf("--- Resultat ---\n");               //Resultat
    printf("Nombre : %d\n",i);
    printf("Moyenne : %.2f\n",moyenne);
    printf("Note Min : %.2f compte %d\n",min,nbMin);
    printf("Note Max : %.2f compte %d\n",max,nbMax);

    return 0;
}
