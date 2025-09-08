#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i , e;

    printf("entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int T[n] ;
    
    printf("saiser elements du tableau :\n");
    for (i = 0; i < n; i++) {

        scanf("%d", &T[i]);
    }

    printf("\nenter element tu veux rechercher :\n");
    scanf("%d", &e);
    for (i = 0; i < n; i++) {
        if (T[i] == e)
        {
            printf("l'element %d est exist , et sa position est %d \n", e , i+1);
            return 0;       
        }
        
    } 
        printf("element %d est non exist \n", e );     
    return 0;
}