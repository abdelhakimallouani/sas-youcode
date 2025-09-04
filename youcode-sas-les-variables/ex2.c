#include <stdio.h>

int main() {
   float k, C ;

   printf(" enter  la temperature en Celsius : " );
   scanf("%f", &C);

   k=C+273.15;

   printf("\n la temperature en Kelvin est: K=%.2f" , k );

   return 0;
}