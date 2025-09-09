#include <stdio.h>
#include <string.h>

int main() {
    char ch1[50];
    char ch2[50];

    printf("entrez une chaine principale chaine : ");
    fgets(ch1, sizeof(ch2), stdin);
    ch1[strcspn(ch1, "\n")] = 0;

    printf("entrez votre une sous chaine : ");
    fgets(ch2, sizeof(ch2), stdin);
    ch2[strcspn(ch2, "\n")] = 0;

    if (strstr(ch1, ch2) != NULL) {
        printf("la sous chaine est exit");
    } else {
        printf("la sous chaine non exit !!");
    }

    return 0;
}