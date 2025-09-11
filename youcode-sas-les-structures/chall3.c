#include <stdio.h>

typedef struct Rectangle{
    float longueur;
    float largeur;
} Rectangle;

float air(float longueur , float largeur){
    float r = longueur * largeur ;
    return r ;
}

int main() {
    Rectangle rectangle;

    printf("entrer la longueur du rectangle: ");
    scanf("%f",&rectangle.longueur);

    printf("entrer la largeur du rectangle: ");
    scanf("%f",&rectangle.largeur);

    float r1= air(rectangle.longueur,rectangle.largeur) ;
    printf("aire du rectangle est: %.2f\n", r1);

    return 0;
}