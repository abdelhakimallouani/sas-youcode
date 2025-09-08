#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i ;

    printf("entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int T[n] , Tc[n];
    
    printf("eaiser elements du tableau :\n");
    for (i = 0; i < n; i++) {

        scanf("%d", &T[i]);
        Tc[i] = T[i] ;
    }
    

    printf("\nTableau enter:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", T[i]);
    }
    printf("\nTableau copie:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", Tc[i]);
    }

    return 0;
}
