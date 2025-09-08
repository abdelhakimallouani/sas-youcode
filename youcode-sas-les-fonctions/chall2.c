#include <stdio.h>
int produit(int a, int b){
    int p=0;
    p = a * b;
    return p ;
 }
 int main(){
    int n,m ;
    printf("entre le 1er nomber : ");
    scanf("%d",&n);
    printf("entre le 2eme nomber : ");
    scanf("%d",&m);
    
    printf("le produit est %d : ", produit(n,m));
    return 0;
 }