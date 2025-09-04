#include <stdio.h>
#include<math.h>

int main(){
    int n, inv=0 ;
    printf("enter un nombre entre n : ");
    scanf("%d",&n);

    do
    {
        inv = ( inv * 10) + (n %10) ;
        n = n / 10 ;
    } while (n !=0 );
    
    printf("inverse est : %d", inv);
    
    return 0;
}