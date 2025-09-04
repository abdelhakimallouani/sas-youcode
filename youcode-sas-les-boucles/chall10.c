#include <stdio.h>

int main() {
    int n,i;
    int  s = 0;
    printf("Entrer un nombre : ");
    scanf("%d" , &n);

    for ( i = 1; i <= n; i++)
    {
       s+=i; 
       printf("%d",i);
       if (i < n)
       {
        printf(" + ");
       }
    }
    printf("= %d\n" ,  s); 
    printf("%d(%d+1)/2= %d\n" , n , n, n*(n+1)/2);
    do {
        printf("les deux resultats sont les memes");
    } while (s != n*(n+1)/2);
    
    return 0;
}