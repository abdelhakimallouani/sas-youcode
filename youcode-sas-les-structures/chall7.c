#include <stdio.h>

typedef struct Date {
    int jour;
    int mois;
    int annee;
}Date;

int main() {
    Date date;
    Date *ptr = &date;

    printf("Entrer le jour : ");
    scanf("%d" , &ptr->jour);
    printf("Entrer le mois : ");
    scanf("%d" , &ptr->mois);
    printf("Entrer l'annee : ");
    scanf("%d" , &ptr->annee);
    printf("\nla date est : %d/%d/%d" , ptr->jour , ptr->mois , ptr->annee);
    return 0;
}