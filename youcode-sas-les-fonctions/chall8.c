#include <stdio.h>
int verifierParite(int nbr) {
    if (nbr % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int nbr;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nbr);

    int estPair = verifierParite(nbr);

    if (estPair) {
        printf("%d est pair\n",nbr);
    } else {
        printf("%d est impair\n",nbr);
    }

    return 0;
}