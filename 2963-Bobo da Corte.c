#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,entrada, votos[100],maior=0;

    scanf("%d",&entrada);

    while(i<entrada){
        scanf("%d",votos);
        i++;
    }

    maior = 0;
    for(i=0;i<entrada;i++){
        if(votos[i] > maior){
            maior = votos[i];
        }
    }
    printf("%d",maior);
    if(votos[0] >= maior){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
