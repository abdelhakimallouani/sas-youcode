#include <stdio.h>
#include<math.h>

int main(){
    int n,s =0,i = 0;
    printf("enter un nombre  : ");
    scanf("%d",&n);

    while (i<n)
    {
        i++;
        s += i ;
    }
    
    printf("la somme est : %d", s);
    
    return 0;
}