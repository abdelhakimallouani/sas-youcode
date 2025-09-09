#include <stdio.h>
#include <string.h>

int main() {
    char C[50],s;

    printf("entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
    
    printf("saisir le caractere a rechercher : ");
    scanf("%c",&s);
    int i ,tmp=0;
    for (i = 0; i <= strlen(C); i++)
    {
        if (C[i] == s)
        {
            tmp++ ;
        }  
    }
    printf("les occurrences de %c est: %d",s, tmp);

    return 0;
}