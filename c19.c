#include <stdio.h>
#include <stdlib.h>
//https://www.maths-et-tiques.fr/telech/Secondegre2ESL.pdf
//Second degres: ax2+bx+c
//Premier degres: bx+c

int main()
{
    //Declaration var
    int a, b, c = 0;
    float delta, x, x1, x2 = 0;

    //Saisi
    printf("Entrez a: ");
    scanf("%d",&a);
    printf("Entrez b: ");
    scanf("%d",&b);
    printf("Entrez c: ");
    scanf("%d",&c);

    if (a == 0) {
        printf("a null donc equation du premier degres\n");
        x = c/-b;
        printf("x: %.2f",x);
    } else {
        //Delta = b2-4ac
        delta = pow(b, 2) - 4 * a * c;
        x1 = (-b-sqrt(delta)) / (2*a);
        x2 = (-b+sqrt(delta)) / (2*a);

        printf("Delta: %.2f\n",delta);
        printf("x1: %.2f\n",x1);
        printf("x2: %.2f\n",x2);
    }
}
