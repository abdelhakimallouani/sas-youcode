#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, cmp;

    printf("entrer le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int T[n];
    printf("eaiser elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                cmp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = cmp;
            }
        }
    }

    printf("\nTableau trie en ordre croissant:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", T[i]);
    }

    return 0;
}
