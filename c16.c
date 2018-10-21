#include <stdio.h>
#include <stdlib.h>

/*
On vous demande de cr�er un programme qui calcule l�IMC d�une personne. L�indice de masse corporelle(IMC)est une grandeur qui permet
d�estimer la corpulence d�une personne.
Elle a �t� invent�e par Adolphe Quetelet, scientifique belge fondateur de la statistique moderne(on dit aussi indice de Quetelet). Cet indice se
calcule en fonction de la taille(m�tres)et de la masse(kg) pour les adultes de 18 � 65 ans. La formuleest :

IMC = masse / taille au carre

L�indice est interpr�t� de la fa�on suivante. * -16,5 : d�nutrition ou famine * 16,5 � 18,5 :maigreur * 18,5 � 25 :corpulence normale * 25 � 30 :
surpoids * 30 � 35 : ob�sit� mod�r�e * 35 � 40 : ob�sit�s�v�re * +40 : ob�sit� morbide ou massive
*/
int main()
{
    //Declaration variables
    float metres = 0;
    float masse = 0;
    float imc = 0;

    //Saisi des valeurs
    printf("Entrez la taille en metres: ");
    scanf("%f",&metres);
    printf("Entrez la masse en kg: ");
    scanf("%f",&masse);

    //Affichage
    printf("\nTaille: %.2f\n",metres);
    printf("Masse: %.2f\n",masse);
    //Calcul IMC
    imc = masse / pow(metres, 2);
    printf("IMC: %.2f\n",imc);
    printf("Interpretation: ");

    //Affichage de l'interpretation de l'IMC
    if (imc < 16.5) {
        printf("denutrition ou famine");
    } else if (imc >= 16.5 && imc <= 18.5) {
        printf("maigreur");
    } else if (imc >= 18.5 && imc <= 25) {
        printf("corpulence normale");
    } else if (imc >= 25 && imc <= 30) {
        printf("surpoids");
    } else if (imc >= 30 && imc <= 35) {
        printf("obesite modere");
    } else {
        printf("obesite orbide ou massive");
    }

    return 0;

    //1. IMC: 1.#J
    //2. Non car lui c'est du muscle
    //3. Creer des boucles
}
