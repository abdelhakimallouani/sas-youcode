#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i ;
    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);
    int T[n];
    printf("saisir ces elements de tableau :\n");
    int max = T[0];
    for ( i = 0; i < n ; i++)
    {
        scanf("%d", &T[i]) ;
        if (max < T[i])
        {
            max = T[i];
        }
    }
    printf("le plus grand element dans un tableau : %d\n", max);
    
    return 0;
}
