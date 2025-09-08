#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i ;
    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);
    int T[n];
    printf("saisir ces elements de tableau :\n");
    int min = T[0];
    for ( i = 0; i < n ; i++)
    {
        scanf("%d", &T[i]) ;
        if (min > T[i])
        {
            min = T[i];
        }
    }
    printf("le plus petit element dans un tableau  : %d\n", min);
    
    return 0;
}
