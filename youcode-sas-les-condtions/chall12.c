#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

   int hh1, mm1, ss1, hh2, mm2, ss2 ;

   printf("Entrez la 1er instant dans le format HH:MM:SS : ");
   scanf("%d:%d:%d", &hh1, &mm1, &ss1);
   printf("Entrez la 2eme instant dans le format HH:MM:SS : ");
   scanf("%d:%d:%d", &hh2, &mm2, &ss2);


   if (hh1<24 && hh2 <24 && mm1 <60 && mm2<60 && ss1 <60 && ss2<60){
   if (hh1 == hh2 && mm1 == mm2 && ss1 == ss2)
   {
       printf("Il s'agit du meme instant ");
   }else if (hh1 > hh2 || hh1 == hh2 && mm1 > mm2 || hh1 == hh2 && mm1 == mm2 && ss1 > ss2 )
   {
       printf("Le deuxieme instant vient avant le premie");
   }else
   {
       printf("Le premier instant vient avant le deuxieme");
   }}else{
       printf("enter auter instant ");
   }

   return 0;
}