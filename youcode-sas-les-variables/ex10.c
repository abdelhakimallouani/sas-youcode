#include <stdio.h>
#include <math.h>

int main() {
   float r , v ;
   const float pi = 3.14 ;

   printf(" enter le rayon de la sphere  : ");
   scanf("%f", &r );

   v = (4/3)* pi *pow(r, 3);

   printf(" le volume d'une sphere est : %.2f\n", v );

   return 0;

}