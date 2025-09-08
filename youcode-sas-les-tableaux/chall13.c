#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i  ;

    printf("entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int T[n] ;
    
    printf("saisir elements du tableau :\n");
    for (i = 0; i < n; i++) {

        scanf("%d", &T[i]);
    }

    printf("\nles elements impairs sont :\n");
    for (i = 0; i < n; i++) {
        if (T[i] % 2 != 0)
        {
            printf("%d ", T[i]); ;
        }   
    }
    return 0;
}