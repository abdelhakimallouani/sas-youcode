#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i , x,y ;

    printf("entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int T[n] ;
    
    printf("saisir elements du tableau :\n");
    for (i = 0; i < n; i++) {

        scanf("%d", &T[i]);
    }
    printf("enter elements tu veux remplacer :");
    scanf("%d", &x);
    printf("enter la nouvelle valeur :");
    scanf("%d", &y);

    for (i = 0; i < n; i++) {
        if (T[i] == x)
        {
            T[i] = y ;
        }   
    }

    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    return 0;
}