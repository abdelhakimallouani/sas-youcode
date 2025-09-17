#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Mot{
    char mot[50];
    int j;
} mot ;

int main() {

    char C[100];
    mot mots[100];

    printf("entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0'; 

    char *mot = strtok(C, " ");
    int s = 0;
    while (mot != NULL) {
        int trouve = 0;
        for (int i = 0; i < s; i++)
        {
            if (strcmp(mots[i].mot, mot)==0)
            {
                mots[i].j++;
                trouve = 1;
                break;
            }    
        }
        if (!trouve) {
            strcpy(mots[s].mot, mot);
            mots[s].j = 1;
            s++;
        }
        mot = strtok(NULL, " ");
    }
    
    
    for (int i = 0; i < s; i++){

        printf("- %s : %d\n", mots[i].mot , mots[i].j);
    }


    return 0;
}
