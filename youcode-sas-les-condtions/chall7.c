#include <stdio.h>

int main() {
   char c;

   printf("Entrez un caractere: ");
   scanf("%c", &c);

   if (c >= 65 && c <= 90) {
       printf("'%c' est un alphabet majuscule.\n", c);
   } else {
       printf("'%c' n'est pas un alphabet majuscule.\n", c);
   }

   return 0;
}