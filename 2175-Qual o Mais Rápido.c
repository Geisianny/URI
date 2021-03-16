#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float o,b,i;

    scanf("%f %f %f",&o,&b,&i);

    if(o<b && o<i){
        printf("Otavio\n");
    }else if(b<o && b<i){
        printf("Bruno\n");
    }else if(i<o && i<b){
        printf("Ian\n");
    }else if(i==o || i== b || b==o){
        printf("Empate\n");
    }
    return 0;
}
