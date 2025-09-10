#include <stdio.h>

typedef struct Etudiant {
    char nom[50];
    char prenom[50];
    int note[5];
} Etudiant;

int main() {
    Etudiant etudiant;
    printf("entrez votre nom: ");
    gets(etudiant.nom);

    printf("entrez votre prenom: ");
    gets(etudiant.prenom);

    printf("entrez votre note:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("note %d : ",i+1);
        scanf("%d", &etudiant.note[i]); 
    }
    
    printf("\nnom: %s\nprenom: %s\n", etudiant.nom, etudiant.prenom);
    for (int i = 0; i < 5; i++)
    {
        printf("note %d = %d\n", i+1 , etudiant.note[i]); 
    }

    return 0;
}