#include <stdio.h>

int main() {
    float n1, n2, n3, n4,n5,total = 0 , moy, max , min ;
    int i ;
    char nom[20] ;

    printf("enter le nom d'etudiant : ") ;
    scanf("%s", &nom);
    printf("===saisie des 5 notes===\n") ;
    printf("enter la 1er note : ") ;
    scanf("%f", &n1);
    if (n1<0 || n1>100 )
    { 
        printf("enter un note comprises entre 0 et 100!! ") ;
        return 0 ;  
    }
    printf("enter la 2eme note : ") ;
    scanf("%f", &n2);
    if (n2<=0 || n2>=100 )
    { 
        printf("enter un note comprises entre 0 et 100!! ") ;
        return 0 ;  
    }
    printf("enter la 3eme note : ") ;
    scanf("%f", &n3);
    if (n3<=0 || n3>=100 )
    { 
        printf("enter un note comprises entre 0 et 100!! ") ;
        return 0 ;  
    }
    printf("enter la 4eme note : ") ;
    scanf("%f", &n4);
    if (n4<=0 || n4>=100 )
    { 
        printf("enter un note comprises entre 0 et 100!! ") ;
        return 0 ;  
    }
    printf("enter la 5eme note : ") ;
    scanf("%f", &n5);
    if (n5<=0 || n5>=100 )
    { 
        printf("enter un note comprises entre 0 et 100!! ") ;
        return 0 ;  
    }
    total = n1+n2+n3+n4+n5;
    printf("Le total des notes est : %.2f\n",total) ;
    moy = (n1+n2+n3+n4+n5)/5 ;
    printf("La moyenne est : %.2f\n", moy) ;

    if (max )
    {
        /* code */
    }
    for ( i = 0; i <= 5 ; i++){
        if (moy >= 50){
            printf(" Nombre de matieres reussies est :%d", i);
        }else if ( moy < 2)
        {
            printf(" Nombre de matieres echouees est :%d",i);
        }
        
    }
    // switch (expression)
    // {
    // case :
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }
    

    return 0;
}