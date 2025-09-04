#include <stdio.h>

int main() {
   float C ;

   printf("  la temperature en Celsius: ");
   scanf("%f", &C);

   if(C < 0){
       printf("l'etat de l'eau a cette temperature est solide");
   }
   else if(0 <= C && C < 100 ){
       printf("l'etat de l'eau a cette temperature est liquide");
   }
   else if(C >= 100){
       printf("l'etat de l'eau a cette temperature est gaz");
   }

   return 0;
}