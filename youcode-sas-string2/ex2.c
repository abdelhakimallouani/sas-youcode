#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char C[50];
    char CF[50];
    int j=0;

    printf("Entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0';

    for (int i = 0; i < strlen(C); i++) {
        if (!ispunct(C[i])) {
            C[j] = C[i];
            j++;
        }
    }
    C[j] = '\0'; 

    printf("La chaine sans ponctuation : %s\n", C); 

    return 0;
}