#include <stdio.h>
#include<math.h>

int main(){
    int n, i , j=0 ;
    printf("enter un nombre  : ");
    scanf("%d",&n);

    for ( i =  1 ; i <= n ; i++) {
        if ( n % i == 0 )
        {
            j++ ;
        }   
        
    }
    if ( j != 2 ){
            printf("pas premier ");
    }else{
            printf("premier ");
    }
    
    return 0;
}