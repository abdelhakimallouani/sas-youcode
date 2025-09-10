#include <stdio.h>

typedef struct Livre{
    char titre[100];
    char auteur[100];
    int annee;
} Livre;

Livre creer() {
    Livre livre;

    printf("entrer le titre du livre: ");
    gets(livre.titre);

    printf("entrer auteur du livre: ");
    gets(livre.auteur);

    printf("entrer annee : ");
    scanf("%d",&livre.annee);

    return livre;
}

int main() {
    Livre livre2 = creer();
    printf("\nles donnees de votre livre:\n");
    printf("titre: %s\n",livre2.titre);
    printf("auteur: %s\n",livre2.auteur);
    printf("annee: %d\n",livre2.annee);

    return 0;
}