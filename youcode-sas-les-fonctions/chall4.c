#include <stdio.h>
void min(int a, int b){
    if (a<b){
        printf("le min est : %d",a);
    }else{
        printf("le min est : %d",b);
    }
}
int main(){
    int a,b;
    printf("entre la 1er nombre : ");
    scanf("%d",&a);
    printf("entre la 2eme nombre : ");
    scanf("%d",&b);
    min(a,b);
    return 0;
}