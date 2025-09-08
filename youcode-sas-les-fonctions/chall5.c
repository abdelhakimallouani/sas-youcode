#include <stdio.h>
long long Factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * Factorielle(n - 1);
    }
}

int main() {
    int nbr;
    printf("entrez nomber positif: ");
    scanf("%d", &nbr);
    if (nbr < 0) {
        printf("nomber pas positif !! \n");
    } else {
        printf("le factorielle de %d est %lld :", nbr, Factorielle(nbr));
    }

    return 0;
}