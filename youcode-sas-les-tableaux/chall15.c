#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i ,m ;

    printf("entrer le nombre d'elements de 1er tableau : ");
    scanf("%d", &n);
    int T1[n] ;
    printf("saisir elements du 1er tableau :\n");
    for (i = 0; i < n; i++) {

        scanf("%d", &T1[i]);
    }
    printf("entrer le nombre d'elements de 2eme tableau : ");
    scanf("%d", &m);
    int T2[m] ;

    printf("saisir elements du 2eme tableau :\n");
    for (i = 0; i < m; i++) {

        scanf("%d", &T2[i]);
    }

    int x= n+m;
    int TF[x] ;
    for (i = 0; i < n; i++) {
        TF[i] = T1[i];
    }
    for (i = 0; i < m; i++) {
        TF[n + i] = T2[i];
    }
    printf("\nle tableau fusionne est :\n");

    for ( i = 0; i < x; i++){
        printf("%d ", TF[i]);
    }
    return 0;
}