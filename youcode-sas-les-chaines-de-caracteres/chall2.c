#include <stdio.h>
#include <string.h>

int main() {
    char car[50];

    printf("entrez votre chaine:");
    fgets(car, sizeof(car), stdin);
    int i , j =0 ;
    for ( i = 1; car[i] !='\0'; i++)
    {
        j++; 
    }

    printf("la longueur de chaine est : %d\n", j);

    return 0;
}