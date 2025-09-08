#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i ;

    printf("entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int T[n] ;
    
    printf("eaiser elements du tableau :\n");
    for (i = 0; i < n; i++) {

        scanf("%d", &T[i]);
    }

    printf("\nTableau enter:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\nTableau inverser:\n");
    for (i = n-1 ; i >= 0; i--) {
        printf("%d ", T[i]);
    }

    return 0;
}
