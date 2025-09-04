#include <stdio.h>

int main() {
    int i,n, fact=1 ;

    printf("enter un nombre :") ;
    scanf("%d", &n);

    for( i=1 ; i<=n ; i++){
        fact *= i ;
    }
    printf("La factorielle de %d est : %d\n", n, fact);
    return 0;
}