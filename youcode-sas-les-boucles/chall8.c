#include <stdio.h>

int main() {
    int i,n, n1 =0 , n2 = 1, a ;

    printf("enter un nombre :") ;
    scanf("%d", &n);

    for( i=0 ; i<n ; i++){
        a = n1+n2;
        n1 = n2;
        n2 = a ;
        printf("%d ", a); // a hiya la suivante dyal la somme d n1 o n2
    }

    return 0;
}