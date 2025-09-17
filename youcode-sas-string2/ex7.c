#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Mot {
    char mot[50];
} mot;

int main() {
    char C[200];
    char CH[200];
    mot mots[100];
    int s = 0;

    printf("Entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0';

    printf("Entrez votre chaine chercher partielle: ");
    fgets(CH, sizeof(CH), stdin);
    CH[strcspn(CH, "\n")] = '\0';

    char *mot = strtok(C, " ");

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
    
    int trouve = 0;
    printf("les mots contient ' %s ' sont : ",CH);
    for (int i = 0; i < s; i++) {
        if (strstr(mots[i].mot, CH) != NULL) {
        printf(" %s" ,mots[i].mot);
        trouve =1;
    }
    }
    return 0;
}
