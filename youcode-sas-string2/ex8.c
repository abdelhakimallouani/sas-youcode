#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Mot {
    char mot[50];
} mot;

void triermots(mot mots[], int n) {
    mot temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(mots[i].mot, mots[j].mot) > 0) {
                temp = mots[i];
                mots[i] = mots[j];
                mots[j] = temp;
            }
        }
    }
}

int main() {
    char C[100];
    mot mots[100];

    printf("Entrez votre chaîne : ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0'; 

    char *mot = strtok(C, " ");
    int s = 0;
    while (mot != NULL) {
        int trouve = 0;
        for (int i = 0; i < s; i++) {
            if (strcmp(mots[i].mot, mot) == 0) {
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            strcpy(mots[s].mot, mot);
            s++;
        }
        mot = strtok(NULL, " ");
    }

    triermots(mots, s);

    printf("\nle tri les mots par ordre alphabetique :\n");
    for (int i = 0; i < s; i++) {
        printf("- %s\n", mots[i].mot);
    }

    return 0;
}
