#include <stdio.h>
#include <math.h>

int main() {

   float longueur, largeur, Surface ;

   printf(" enter  la longueur du rectangle : ");
   scanf("%f", &longueur );
   printf(" enter  la largeur du rectangle : ");
   scanf("%f", &largeur );

   Surface = longueur * largeur;

   printf(" la surface d'un rectangle est : %.2f\n", Surface );

   return 0;
}