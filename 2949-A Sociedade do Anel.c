#include<stdio.h>
#include<stdlib.h>

int main()
{
    int entrada,i=0,anao,hobbit,elfo,humano,mago;
    char nome[50], tiporaca;

    scanf("%d",&entrada);

    anao = 0;
    hobbit = 0;
    elfo = 0;
    humano = 0;
    mago = 0;

    while(i<entrada){

       scanf("%s %c",nome,&tiporaca);

       if(tiporaca == 'A'){
            anao++;
       }else if(tiporaca == 'X'){
            hobbit++;
       }else if(tiporaca == 'E'){
            elfo++;
       }else if(tiporaca == 'H'){
            humano++;
       }else if(tiporaca == 'M'){
            mago++;
       }

       i++;

    }

    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)\n",hobbit,humano,elfo,anao,mago);

    return 0;

}
