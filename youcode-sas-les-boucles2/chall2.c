#include <stdio.h>
#include<math.h>

int main(){
    int n, i  , j ;
    printf("enter un nombre impair d'etoiles : ");
    scanf("%d",&n);
    if (n % 2 == 0)
    {
        printf(" enter un nombre impair ");
        return 0;
    }
    

    for ( i =  1 ; i <= n ; i++) {
        printf("*\n");
        for ( j = 1 ; j < (n - i) ; j++)
        {
            printf(" ");
        }
        for ( j = 1 ; j < (2*i - 1) ; j++)
        {
            printf("*");
        }
        
        
    }
    
    return 0;
}
