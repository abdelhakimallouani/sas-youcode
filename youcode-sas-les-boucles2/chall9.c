#include <stdio.h>

int main() {
    int b ,p,res=1,j=0;

    printf("enter la base :") ;
    scanf("%d", &b);
    printf("enter la puissance :") ;
    scanf("%d", &p);
    if (p == 0){
        printf("le rsultat est 1") ;
    }else if (p < 0)
    {
        printf("optionnel") ;
    }else
    {
        while (j<p)
    {
        res*=b ;
        j++;
        
    }
    printf("%d^%d = %d",b,p,res) ;
    }
    
    return 0;
}