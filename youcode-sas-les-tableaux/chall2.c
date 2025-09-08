#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i ;
    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);
    int T[n];
    printf("saisir ces elements de tableau :\n");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d", &T[i]) ;
    }
    printf("les elements de votre tableau sont :\n");
    for ( i = 0; i < n ; i++)
    {
        printf("%d\n", T[i]);
    }
    
    return 0;
}
