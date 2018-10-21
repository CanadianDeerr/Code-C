#include <stdio.h>
#include <stdlib.h>

//On vous demande de créer un programme capable de calculer un prix TTC à partir de son montant HT et du taux de TVA applicable.
//Seuls les calculs avec les taux en vigueur sont autorisés.

int main() {
    //Declaration des variables
    float prixHT = 0;
    int choix = 0;
    float prixTVA = 0;

    //Saisi
    printf("Saisissez le montant HT: ");
    scanf("%f",&prixHT);

    //Choix des taux
    printf("1. taux normal (20)\n");
    printf("2. taux intermediaire (10)\n");
    printf("3. taux reduit (5.5)\n");
    printf("4. taux particulier (2.1)\n");
    printf("Choisissez le taux: ");
    scanf("%d",&choix);

    printf("--- Resultat ---\n");
    printf("Montant HT: ");

    //Selection en fontion du choix
    if (choix == 1) {
        //Calcul prixTVA 20%
        printf("%.2f\n",prixHT);
        printf("Taux TVA: 20\n");
        prixTVA = prixHT * 1.2;
        printf("Montant TVA: %.2f",prixTVA);

    } else if (choix == 2) {
        //Calcul prixTVA 10%
        printf("%.2f\n",prixHT);
        printf("Taux TVA: 10\n");
        prixTVA = prixHT * 1.1;
        printf("Montant TVA: %.2f",prixTVA);

    } else if (choix == 3) {
        //Calcul prixTVA 5.5%
        printf("%.2f\n",prixHT);
        printf("Taux TVA: 5.5\n");
        prixTVA = prixHT * 1.055;
        printf("Montant TVA: %.2f",prixTVA);

    } else if (choix == 4) {
        //Calcul prixTVA 2.1%
        printf("%.2f\n",prixHT);
        printf("Taux TVA: 2.1\n");
        prixTVA = prixHT * 1.021;
        printf("Montant TVA: %.2f",prixTVA);

    }

    return 0;
}
