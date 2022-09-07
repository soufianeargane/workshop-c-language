#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[10], prenom[10], sexe[10];
    int  age, num;
    printf("tapez votre nom: ");
    scanf("%s", &nom);
    printf("tapez votre prenom: ");
    scanf("%s", &prenom);
    printf("homme ou femme: ");
    scanf("%s", &sexe);
    printf("tapez votre age: ");
    scanf("%d", &age);
    printf("tapez votre num: ");
    scanf("%d", &num);
    
    printf("votre nom est=%s \n", nom);
    printf("votre prenom est=%s \n", prenom);
    printf("votre sexe est=%s \n", sexe);
    printf("votre age est=%d \n", age);
    printf("votre num est=%d \n", num);
    return 0;
}
