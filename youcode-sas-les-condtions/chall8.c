
#include <stdio.h>

int main() {
   float n;

   printf("Entrez un note : ");
   scanf("%f", &n);

   if (n<10) {
       printf(" est recale " );
   } else if(n >= 10 && n < 12) {
       printf(" la mention passable" );
   }else if (n >= 12 && n < 14){
       printf("  la mention assez bien" );
   }else if (n >= 14 && n < 16){
       printf("  la mention bien" );
   }else if (n >= 16){
       printf("  la mention très bien." );
   }

   return 0;
}
