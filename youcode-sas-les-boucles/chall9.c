#include <stdio.h>

int main() {
    int n;
    int  m = 0;
    printf("Entrer un nombre : ");
    scanf("%d" , &n);

    while (n) {
        if (n!= 0) {
            n = n / 10 ;
            m++;
        } else if (n == 0) {
            break;
        }
    }
    printf("Le nombre des chiffre est : %d " ,  m);
    return 0;
}