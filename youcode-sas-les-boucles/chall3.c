#include <stdio.h>

int main() {
    int i,n, somme=0 ;

    printf("enter un nombre :") ;
    scanf("%d", &n);

    for( i=1 ; i<=n ; i++){
        somme += i ;
    }
    printf("la somme des n premiers nombres %d est : %d\n", n, somme);
    return 0;
}