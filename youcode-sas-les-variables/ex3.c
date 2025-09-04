#include <stdio.h>

int main() {
   float km, yards ;

   printf(" enter  la distance en kilometres : " );
   scanf("%f", &km);

    yards=km*1093.61;

   printf("\n la distance en yards est: yards=%.2f" , yards );

   return 0;
}
