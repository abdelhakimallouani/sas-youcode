#include <stdio.h>

int main() {
   float a, b ;

   printf(" enter le 1er nombre :");
   scanf("%f", &a);
   printf(" enter le 2eme nombre :");
   scanf("%f", &b);

   printf(" la somme des deux nombres est : %.2f\n", a+b);
   printf(" la différence des deux nombres est : %.3f\n", a-b);
   printf(" le produit des deux nombres est : %.2f\n", a*b);
   if (b != 0)
   {
       printf(" la quotient des deux nombres est : %.2f\n", a/b);
   }
   else{
       printf(" impossible de calculer la quotient ");
   }



   return 0;
}