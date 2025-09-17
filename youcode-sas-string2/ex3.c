#include <stdio.h>
#include <string.h>

int main() {
    char C[100];
    printf("entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0'; 

    int total = 0;
    char *mot = strtok(C, " ");

    while (mot != NULL) {
        total++;
        mot = strtok(NULL, " ");
    }

    printf("le nombre total de mots : %d\n", total);
    return 0;
}
