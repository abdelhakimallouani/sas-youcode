#include <stdio.h>

int main() {
    float n, s = 0;
    int t = 0;
    float m;

    

    while (1) {
        printf("Nombre %d : ", t+1);
        scanf("%f", &n);

        if (n == 0) {
            break; 
        }
        s += n;
        t++;
    }

    if (t > 0) {
        m = s / t;
        printf("\nLa moyenne des %d nombres saisis est : %.2f", t, m);
    }

    return 0;
}
