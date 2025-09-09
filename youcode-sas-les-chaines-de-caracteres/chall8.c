#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char C[50];

    printf("entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    
    for (int i = 0; i <= strlen(C); i++)
    {
        C[i] = tolower((char)C[i]); ; 
    }
    printf("la chaine en en majuscules : %s\n", C);

    return 0;
}