#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i ,f=0, r=0 ;
    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);
    printf("enter le facteur pour multiple avec chaque d'elements du tableau : ");
    scanf("%d",&f);

    int T[n];
    printf("saisir ces elements de tableau :\n");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d", &T[i]) ;
    }
    printf("\nla resultat de multiple chaque element:\n");    
    for ( i = 0; i < n ; i++)
    {
        r=f*T[i] ;
        printf("%d\n",r);
    }    
    return 0;
}