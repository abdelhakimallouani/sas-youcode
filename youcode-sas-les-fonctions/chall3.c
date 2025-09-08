#include <stdio.h>
void max(int a, int b){
    if (a>b){
        printf("le max est : %d",a);
    }else{
        printf("le max est : %d",b);
    }
}
int main(){
    int a,b;
    printf("entre la 1er nombre : ");
    scanf("%d",&a);
    printf("entre la 2eme nombre : ");
    scanf("%d",&b);
    max(a,b);
    return 0;
}