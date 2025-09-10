#include <stdio.h>

typedef struct Rectangle{
    float longueur;
    float largeur;
} Rectangle;


int main() {
    Rectangle rectangle;

    printf("entrer la longueur du rectangle: ");
    scanf("%f",&rectangle.longueur);

    printf("entrer la largeur du rectangle: ");
    scanf("%f",&rectangle.largeur);

    float r = rectangle.longueur * rectangle.largeur ;
    printf("aire du rectangle est: %.2f\n", r);

    return 0;
}