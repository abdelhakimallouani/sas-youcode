#include <stdio.h>
#include<math.h>

int main(){
    int n, i ;
    printf("enter un nombre entre n : ");
    scanf("%d",&n);

    for ( i = 10; i >= 1 ; i--)
    {
        printf("%d*%d=%d\n", n,i,n*i);
    }
    
    return 0;
}