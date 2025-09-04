#include <stdio.h>

int main() {
   float ms , kmh ;

   printf(" enter la vitesse en kilometres par heure (km/h)  : " );
   scanf("%f", &kmh);

   ms=kmh*0.27778;

   printf("\n la vitesse  en metres par seconde (m/s) est: m/s =%.5f" , ms );

   return 0;
}