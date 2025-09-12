#include <stdio.h>
#include <string.h>


int nbr ;
int nbc;
typedef  struct Etudiant {
    int id;
    char nom[50];
    char prenom[50];
    int age ;
    float moy ;
}etudiant;
typedef struct Cours{
    int code ;
    char nomc[50];
    int credits;
    float note ;
}cours;



etudiant ajouteretud( etudiant etud[50]) {
    getchar();

    for (int i = 0; i < nbr; i++)
    {
    printf("Entrer la ID etudiant %d : ", i+1);
    scanf("%d",&etud[i].id);
    getchar();

    printf("Entrer le nom etidiant %d: ",i+1);
    fgets(etud[i].nom, sizeof(etud[i].nom), stdin);
    etud[i].nom[strcspn(etud[i].nom, "\n")] = '\0';
    getchar();
    printf("Entrer le prenom etidiant %d: ",i+1);
    fgets(etud[i].prenom, sizeof(etud[i].prenom), stdin);
    etud[i].prenom[strcspn(etud[i].prenom, "\n")] = '\0';
    getchar();
    printf("Entrer l age etidiant %d: ",i+1);
    scanf("%d",&etud[i].age);
    getchar();

    printf("Entrer la mouyenne etidiant %d: ",i+1);
    scanf("%f",&etud[i].moy);
    getchar();
    } 
    
}

cours ajoutercour( cours cour[50]) {
    

    for (int i = 0; i < nbc; i++){
    printf("Entrer le code de cours  %d : ", i+1);
    scanf("%d",&cour[i].code);
    getchar();

    printf("Entrer le nom de cour %d: ",i+1);
    fgets(cour[i].nomc, sizeof(cour[i].nomc), stdin);
    cour[i].nomc[strcspn(cour[i].nomc, "\n")] = '\0';
    getchar();

    printf("Entrer la credits %d: ",i+1);
    scanf("%d",&cour[i].credits);
    getchar();
    printf("Entrer la note de cours %d: ",i+1);
    scanf("%f",&cour[i].note);
    getchar();
    } 
    
}

etudiant afficheetud( etudiant etud[50]) {

    printf("\n ==== informations des etudiants ====\n");
	
    for ( int i = 0; i < nbr; i++) {
        printf("\nEtudiant %d\n", i + 1);
        printf("la id d'etudaint : %d\n", etud[i].id);
        printf("le nom : %s\n", etud[i].nom);
        printf("le prenom : %s\n", etud[i].prenom);
        printf("L'age : %d\n", etud[i].age);
        printf("La moyenne : %f\n", etud[i].moy);
    }
}

cours affichecour(cours cour[50]) {

    printf("\n ==== informations des cours ====\n");
	
    for ( int i = 0; i < nbc; i++) {
        printf("\ncour %d\n", i + 1);
        printf("le code du cour : %d\n", cour[i].code);
        printf("le nom du cour : %s\n", cour[i].nomc);
        printf("Le credits : %d\n", cour[i].credits);
        printf("La note de cour : %f\n", cour[i].note);
    }
}

etudiant rechercheetud(etudiant etud[50]){
    int id1;

    printf("enter la id d'etudaint rechercher :");
    scanf("%d",&id1);
    for (int i = 0; i < nbr; i++)
    {
        if (etud[i].id == id1)
        {
        printf("la id d'etudaint : %d\n", etud[i].id);
        printf("le nom : %s\n", etud[i].nom);
        printf("le prenom : %s\n", etud[i].prenom);
        printf("L'age : %d\n", etud[i].age);
        printf("La moyenne : %f\n", etud[i].moy);
        }
        
        
    }
    
}


int main() {
    etudiant etud[100];
    cours cour[100];

    printf("Entrer le nombre des etudiants : ");
    scanf("%d",&nbr);
    printf("Entrer le nombre des cours : ");
    scanf("%d",&nbc);

    int choix;
    do {
        printf("\n--- Gestion Universitaire ---\n");
        printf("1. Ajouter des etudiants\n");
        printf("2. Ajouter des cours\n");
        printf("3. Afficher la liste des etudiants\n");
        printf("4. Afficher la liste des cours\n");
        printf("5. Rechercher un etudiant\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouteretud(etud); break;
            case 2: ajoutercour(cour); break;
            case 3: afficheetud(etud); break;
            case 4: affichecour(cour); break;
            case 5: rechercheetud(etud); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide !\n"); break;
        }
    } while (choix != 0);

    return 0;
}