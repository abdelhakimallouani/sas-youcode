#include <stdio.h>
#include <string.h>

int main() {
    char nom[50];
    char prenom[50];

    printf("entrez votre nom: ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = 0;

    printf("entrez votre prenom : ");
    fgets(prenom, sizeof(prenom), stdin);
    prenom[strcspn(prenom, "\n")] = 0;

    strcat(nom, " "); 
    strcat(nom, prenom);

    printf("le nom complet : %s\n", nom);

    return 0;
}