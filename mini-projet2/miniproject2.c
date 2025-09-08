#include <stdio.h>

int main() {
    int i;
    char *car[5] = {"h", "e", "l", "l", "o"};
    char *car2[5] = {"-", "-", "-", "-", "-"};
    char c;

    printf("enter un lettre :") ;
    scanf("%c", &c);

    for (i = 0; i < 5; i++) {
        if (c == car[i])
        {
            car2[i] = car[i] ;
            printf("%s", car2[i] ); 
        }else 
        {
            printf("Mauvaise reponse");
            return 0;
        }    
        
    }
    for (i = 0; i < 5; i++) {
        if (car[i] == car2[i])
        {
            printf(" toutes les lettres sont devinées")
        }
        
    
    }
    return 0;
}