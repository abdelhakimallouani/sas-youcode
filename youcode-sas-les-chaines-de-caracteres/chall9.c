#include <stdio.h>
#include <string.h>

int main() {
    char C[50],CF[50];

    printf("entrez votre chaine : ");
    fgets(C, sizeof(C), stdin);
     int j =0;
    for (int i = 0 ; i <strlen(C); i++)
    {
        if (C[i] != ' ') {
            CF[j++] = C[i];
        }
    }
    CF[j]='\0' ;
    printf("entrez votre chaine : %s",CF);
    return 0;
}