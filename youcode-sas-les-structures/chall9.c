#include <stdio.h>
#include <string.h>

typedef struct Compte {
    char nom[30];
    float solde;
} compte;

compte ajouter(compte soldefinal , float montant) {
    soldefinal.solde += montant;
    return soldefinal;
}

int main() {
    compte cmpt;
    float montant;

    printf("entrer votre nom : ");
    gets(cmpt.nom);

    printf("entrer votre solde : ");
    scanf("%f",&cmpt.solde);
    getchar();
    
    printf("entrer le montant que tu veux ajouter : ");
    scanf("%f", &montant);
    getchar();

    cmpt = ajouter(cmpt, montant);
    printf("solde de %s apree ajoute de %.2f dh est : %.2f dh\n",cmpt.nom, montant, cmpt.solde);

    return 0;
}