#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];
    
    printf("entrez votre nom : ");
    scanf("%s", nom);
    
    printf("entrez votre prenom : ");
    scanf("%s", prenom);
    
    printf("entrez votre age : ");
    scanf("%d", &age);
    
    printf("entrez votre sexe : ");
    scanf(" %c", &sexe); 
    
    printf("entrez votre adresse email : ");
    scanf("%s", &email);
    
    printf("nom : %s\n", nom);
    printf("prenom : %s\n", prenom);
    printf("age : %d ans\n", age);
    printf("sexe : %c\n", sexe);
    printf("email : %s\n", email);
    
    return 0;
}
