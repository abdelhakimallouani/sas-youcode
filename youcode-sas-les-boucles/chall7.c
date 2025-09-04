#include <stdio.h>
int main()
{
   int inv = 0, n;
 
   printf("Entrez un nombre :\n");
   scanf("%d", &n);
 
   while (n != 0)
   {
      inv *= 10;
      inv += n%10;
      n = n/10;
   }
 
   printf("Le nombre inverse est = %d\n", inv);
 
   return 0;
}