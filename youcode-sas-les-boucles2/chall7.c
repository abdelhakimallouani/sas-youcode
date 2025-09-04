#include <stdio.h>

int main() {
    int i =2  ,n, n1 =0 , n2 = 1, a ;

    printf("enter un nombre :") ;
    scanf("%d", &n);

    do
    {
        a = n1+n2;
        printf("%d ", a);
        n1 = n2;
        n2 = a ;
        i++;
        
    } while (i <= n);
    

    return 0;
}