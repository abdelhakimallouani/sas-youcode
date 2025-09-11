#include <stdio.h>

typedef struct Produit{
    char nom[100];
    float prix;
    int quantite;
} Produit;

int main() {
    Produit produits[500];
    int n;
    
    printf("entrer le nombre des produits : ");
    scanf("%d", &n);
    getchar();
    
    for (int i = 0; i < n; i++) {
        printf("\nentrer le nom du produit %d: ", i + 1);
        fgets(produits[i].nom, sizeof(produits[i].nom), stdin);

        printf("entrer le prix du produit %d: ", i + 1);
        scanf("%f", &produits[i].prix);

        printf("entrer la quantite du produit %d: ", i + 1);
        scanf("%d",&produits[i].quantite);
        getchar();
    }

    printf("\n ====  les informations de ses produits : === \n");
    
    for (int i = 0; i < n; i++) {
        printf("produit %d:\n", i + 1);
        printf("nom: %s", produits[i].nom);
        printf("prix: %.2f\n", produits[i].prix);
        printf("quantite: %d\n", produits[i].quantite);
    }

    return 0;
}