#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c;
   float delta, x1, x2 ;

   printf("Entrez le coefficient a: ");
   scanf("%f", &a);

   printf("Entrez le coefficient b: ");
   scanf("%f", &b);

   printf("Entrez le coefficient c: ");
   scanf("%f", &c);


   delta = b * b - 4 * a * c;
   printf("Delta = %.2f\n", delta);

   if (delta > 0) {

       x1 = (-b + sqrt(delta)) / (2 * a);
       x2 = (-b - sqrt(delta)) / (2 * a);

       printf("Deux solutions reelles distinctes:\n");

       printf("x1 = %.2f\n", x1);
       printf("x2 = %.2f\n", x2);
   }
   else if (delta == 0) {
       x1 = -b / (2 * a);
       printf("Une solution reelle:\n");
       printf("x = %.2f\n", x1);
   }
   else {
       printf("il n'y a pas de solutions reelles\n");
   }

   return 0;
}
