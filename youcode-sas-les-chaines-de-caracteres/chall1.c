#include <stdio.h>
#include <string.h>

int main() {
    char nom[50];

    printf("entrez votre nom : ");
    fgets(nom, sizeof(nom), stdin);
    
    printf("le nom : %s", nom);

    return 0;
}
