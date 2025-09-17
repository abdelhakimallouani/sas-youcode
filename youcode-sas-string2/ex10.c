#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Mot {
    char mot[50];
    int occ;
    int lon;
} mot;

void trielon(mot mots[], int n) {
    mot temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mots[i].lon > mots[j].lon) {
                temp = mots[i];
                mots[i] = mots[j];
                mots[j] = temp;
            }
        }
    }
}

int main() {
    char C[200];
    mot mots[100];
    int s = 0;

    printf("entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0';

    char *mot = strtok(C, " ");

    while (mot != NULL) {
        int trouve = 0;
        for (int i = 0; i < s; i++) {
            if (strcmp(mots[i].mot, mot) == 0) {
                mots[i].occ++;
                trouve = 1;
                break;
            }
        }

        if (!trouve) {
            strcpy(mots[s].mot, mot);
            mots[s].occ = 1;
            mots[s].lon = strlen(mot);

            s++;
        }

        mot = strtok(NULL, " ");
    }
    
trielon(mots,s);
    for (int i = 0; i < s; i++) {

        printf("%s <=> %d\n", mots[i].mot, mots[i].lon);

    }

    return 0;
}
