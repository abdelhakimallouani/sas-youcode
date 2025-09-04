#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,n, password ;
    char car[]={"AZERTYUIUUIOPLKJHGFDQSMNBVCXWazertyuiopmlkjhgfdsqwxcvbn0123456789"} ;

    printf("enter un la longueur de votre mode passe :") ;
    scanf("%d", &n);

    for (i = 0 ; i  < n ; i++) {
        password = rand() % (sizeof(car));
        printf("%c" , car[password]);
    }
    printf("\n");
    return 0;
}