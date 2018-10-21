//c01
//Boucle de saisie d'une chaîne de caractères
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration de variable
    char prenom[100];

    do
    {
        //Vide le buffer
        fflush(stdin);
        printf("Saississez votrre prenom:");
        fgets(prenom,100,stdin);
        //Affiche le prenom
        printf("Bonjour, %s",prenom);
    }
    while (prenom[0] != '\n');
    //Fin
    return 0;
}

/*
1. Codeblocks est un éditeur de code (IDE)
2. Un projet est un ensemble de fichier pour le programme en question
3. On compile un programme en appuyant sur la roue dentée
4. On execute un programme en appuyant sur le logo play
5. Si j'ai une erreur je ne peux pas compiler
6. printf() sert à afficher une chaîne de caractère
7. fgets() sert à saisir une chaîne de caractère en l'assignant à une variable
8. prenom[0] correspond à 0 caractère sur la variable prenom ??
9.
10. Le do while sert à faire une boucle
11. Les principales étapes du dernier programmes sont de déclarer la variable prenom, vider le buffer du clavier, saisir un prenom et l'assigner a la variable
    prenom et afficher le prneom saissi
*/
