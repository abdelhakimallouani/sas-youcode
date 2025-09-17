#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Mot {
    char mot[50];
    int occ;
    int pos[50];
    int lon;
} mot;

int main() {
    char C[200];
    char CH[200];
    mot mots[100];
    int s = 0;

    printf("Entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0';

    printf("Entrez votre chaine chercher  exacte : ");
    fgets(CH, sizeof(CH), stdin);
    CH[strcspn(CH, "\n")] = '\0';

    char *mot = strtok(C, " ");
    int j = 0; 

    while (mot != NULL) {
        int trouve = 0;
        for (int i = 0; i < s; i++) {
            if (strcmp(mots[i].mot, mot) == 0) {
                mots[i].occ++;
                mots[i].pos[mots[i].occ - 1] = j;
                trouve = 1;
                break;
            }
        }

        if (!trouve) {
            strcpy(mots[s].mot, mot);
            mots[s].occ = 1;
            mots[s].pos[0] = j;
            mots[s].lon = strlen(mot);
            s++;
        }

        mot = strtok(NULL, " ");
        j++;
    }
    
    int trouve = 0;

    for (int i = 0; i < s; i++) {
        if (strcmp(mots[i].mot, CH) == 0) {
        printf("%s =  longueur:%d, occurrences:%d, positions:[",mots[i].mot, mots[i].lon, mots[i].occ);
        for (int j = 0; j < mots[i].occ; j++) {
            printf("%d", mots[i].pos[j]);
            if (j < mots[i].occ - 1) printf(",");
        }
        printf("]\n");
        trouve = 1;
        break;
    }
    }

    return 0;
}
