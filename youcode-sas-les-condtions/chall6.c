#include <stdio.h>

int main() {
   int n;

   printf("Entrez le nombre : ");
   scanf("%d", &n);
   if (n < 0)
   {
       printf("le nombre %d est negatif",n);
   }else if (n > 0 )
   {
       printf("le nombre %d est positif",n);
   }else{
       printf("le nombre est egal a zero");
   }

   return 0;
}