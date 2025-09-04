#include <stdio.h>
#include <math.h>

int main() {

   int a, b ;

   printf("enter la 1er valeur: ");
   scanf("%d", &a);
   printf("enter la 2er valeur: ");
   scanf("%d", &b);

   if (a != b )
   {
       printf("la somme de deux valeur est : %d ", a+b );
   }else{
       printf("le triple de leur somme est : %d ", (a+b)*3 );
   }

   return 0;
}