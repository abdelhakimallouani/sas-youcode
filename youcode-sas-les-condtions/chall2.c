#include <stdio.h>
#include <math.h>

int main() {

   char cara ;

   printf(" enter le caractere : ");
   scanf("%s", &cara);

   switch (cara)
   {
   case 'a':
       printf(" voyelle ");
       break;
   case 'o':
       printf(" voyelle ");
       break;
   case 'i':
       printf(" voyelle ");
       break;
   case 'u':
       printf(" voyelle ");
       break;
   case 'e':
       printf(" voyelle ");
       break;
   case 'y':
       printf(" voyelle ");
       break;
   default: printf(" pas voyelle ");
       break;
   }

   return 0;
}