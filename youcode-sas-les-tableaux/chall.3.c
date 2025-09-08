#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i , s=0 ;
    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);
    int T[n];
    printf("saisir ces elements de tableau :\n");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d", &T[i]) ;
        s+=T[i] ;
    }
    printf("la somme de votre elements : %d\n",s);
    
    return 0;
}
