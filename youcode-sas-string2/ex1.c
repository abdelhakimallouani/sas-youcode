#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minuscule(char* car) {
    for (int i = 0; i < strlen(car); i++) {
        car[i] = tolower((char)car[i]);
    }
}

int main() {
    char C[50];

    printf("Entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0';

    minuscule(C);

    printf("La chaine en minuscules : %s\n", C);

    return 0;
}
