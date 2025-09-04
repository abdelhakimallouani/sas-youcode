#include <stdio.h>

int main() {
   char c;

   printf("Entrez un caractere: ");
   scanf("%c", &c);

   if (c >= 'A' && c <= 'Z') {
       printf("'%c' est un alphabet majuscule.\n", c);
   } else if (c >= 'a' && c <= 'z'){
       printf("'%c' est un alphabet  minuscule.\n", c);
   }else
   {
       printf("'%c' est pas un alphabet\n", c);
   }


   return 0;
}