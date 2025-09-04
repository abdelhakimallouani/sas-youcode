#include <stdio.h>

int main() {
   float a, b, c, m ;

   printf(" enter le 1er nombre :");
   scanf("%f", &a);
   printf(" enter le 2eme nombre :");
   scanf("%f", &b);
   printf(" enter le 3eme nombre :");
   scanf("%f", &c);

   m = (a*2+b*3+c*5)/(2+3+5);

   printf(" la moyenne ponderee de trois nombres est : %.2f\n", m );

   return 0;
}