#include <stdio.h>

typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point p;
    Point *ptr = &p;

   
    printf("Entrez la coordonnee x : ");
    scanf("%f", &ptr->x); 

    printf("Entrez la coordonnee y : ");
    scanf("%f", &ptr->y);

    printf("Le point est : (%.2f, %.2f)", ptr->x, ptr->y);

    return 0;
}
