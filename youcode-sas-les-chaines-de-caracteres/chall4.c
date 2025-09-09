#include <stdio.h>
#include <string.h>

int main() {
    char ch1[50];
    char ch2[50];

    printf("entrez 1er chaine : ");
    fgets(ch1, sizeof(ch2), stdin);

    printf("entrez votre ch2 : ");
    fgets(ch2, sizeof(ch2), stdin);

    if (strcmp(ch1, ch2) == 0) {
        printf("les deux chaines sont identiques");
    } else {
        printf("les deux chaines sont different");
    }

    return 0;
}