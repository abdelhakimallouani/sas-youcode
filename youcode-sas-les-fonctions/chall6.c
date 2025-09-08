#include <stdio.h>
long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
int main() {
    int n;
    printf("entree nombe positif : ");
    scanf("%d",&n);
    if (n < 0) {
        printf("nomber pas positif !!\n");
    } else {
        printf("le n-ieme terme de la suite de Fibonacci est %lld\n",fibonacci(n));
    }

    return 0;
}