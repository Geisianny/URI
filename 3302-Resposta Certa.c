#include<stdio.h>
#include<stdlib.h>

int main(){

    int entrada,i;

    scanf("%d\n", &entrada);
    
    int num[entrada];

    for(i = 1; i<= entrada; i++){
        scanf("%d", &num[i]);
    }
    
    for ( i = 1; i<=entrada; i++){
        printf("resposta %d: %d\n",i,num[i]);
        
    }
}