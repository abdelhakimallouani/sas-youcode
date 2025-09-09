#include <stdio.h>
#include <string.h>

int main() {
    char C[50];

    printf("entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);

    // printf("inverse est : ");
    // for (int i = strlen(C)-1; i >= 0; i--)
    // {
    //     printf("%c", C[i]);
    // }
    // hta had la methode correcte
    puts(strrev(C)) ;
    return 0;
}