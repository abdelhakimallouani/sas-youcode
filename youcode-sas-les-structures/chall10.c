#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employers{
    char nom[30];
    float salary;
} employers;
int count = 0;

int main(){

    int n ;

    printf("entrer le nombre des employes : ");
    scanf("%d", &n);
    getchar();

    employers* emp = malloc(n * sizeof(employers));
    if (emp == NULL) {
        printf("error d'allocation mémoire !\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("L'employe %d:\n\n",i+1);
        printf("Le nom : ");
        scanf("%s" , emp[i].nom);
        printf("Le salaire : ");
        scanf("%f" , &emp[i].salary);
        
    }

    printf("\n ====  les informations de ses employes : === \n");
    for (int i = 0; i < n; i++) {
        printf("employe %d : %s\nsalaire : %.2f DH\n\n", i + 1, emp[i].nom, emp[i].salary);
    }
    free(emp);
    
}