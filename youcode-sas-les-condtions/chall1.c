#include <stdio.h>
#include <math.h>

int main() {

   int n ;

   printf(" enter  la nombre entier : ");
   scanf("%d", &n);

   if ( n % 2 == 0 ){
       printf("Le nombre est pair ");
   }else{
       printf("Le nombre impair ");
   }

   return 0;
}