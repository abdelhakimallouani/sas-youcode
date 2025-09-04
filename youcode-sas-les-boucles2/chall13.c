#include <stdio.h>
#include<math.h>

int main(){
    int n, i, p ,s=0;
    printf("enter un nombre entre n : ");
    scanf("%d",&n);

    for ( i = 1; i <= 10 ; i++)
    {
        p = n*i ;
        s = s +p;
        printf("%d*%d=%d\n", n,i,p);
        
    }
    printf("la sommes est : %d ", s);
    return 0;
}