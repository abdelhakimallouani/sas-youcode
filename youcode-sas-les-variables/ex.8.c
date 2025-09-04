#include <stdio.h>
#include <math.h>
int main() {
   float a, b, c, mg ;

   printf(" enter le 1er nombre :");
   scanf("%f", &a);
   printf(" enter le 2eme nombre :");
   scanf("%f", &b);
   printf(" enter le 3eme nombre :");
   scanf("%f", &c);

   mg = pow(a * b * c , 1/3);

   printf("  la moyenne geometrique de trois nombres  est : %.2f\n", mg );

   return 0;
}