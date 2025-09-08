#include <stdio.h>
 int somme(int a, int b){
    int s=0;
    s = a + b;
    return s;
 }
 int main(){
    int n,m ;
    printf("entre le 1er nomber : ");
    scanf("%d",&n);
    printf("entre le 2eme nomber : ");
    scanf("%d",&m);
    
    printf("la somme est %d : ", somme(n,m));
    return 0;
 }