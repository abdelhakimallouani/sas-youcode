#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i , s=0 ;
    float m=0 ;
    printf("enter le nombre d'elements d'un tableau : ");
    scanf("%d",&n);
    if (n==0)
        {
            printf("la division par zero imposible !! \n");
            return 0;
        }
    int T[n];
    printf("saisir ces elements de tableau :\n");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d", &T[i]) ;
        s+=T[i] ;
        m = s/n ;
    }
    printf("la moyenne arithmetique de votre elements : %.2f\n",m);
    
    return 0;
}
