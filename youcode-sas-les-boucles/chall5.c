#include <stdio.h>

int main() {
    int i , b ,p,res=1;

    printf("enter la base :") ;
    scanf("%d", &b);
    printf("enter la puissance :") ;
    scanf("%d", &p);
    if (p == 0){
        printf("le rsultat est 1") ;
    }else if (p < 0)
    {
        printf("optionnel") ;
    }
    
    for( i=0 ; i<p ; i++){
        res=res*b ;
    }
    printf("%d^%d = %d",b,p,res) ;
    
    return 0;
}