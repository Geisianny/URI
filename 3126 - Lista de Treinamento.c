#include<stdio.h>
#include<stdlib.h>


int main()
{
    int entrada,c,i,cont=0;

    scanf("%d",&entrada);

    while(i<entrada){

        scanf("%d",&c);
        if(c == 1){
            cont++;
        }
        i++;
    }
    printf("%d\n",cont);
    return 0;
}
