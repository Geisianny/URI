#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char txt[500];
    int tam=0;

    scanf("%[^\n]",txt);

    tam = strlen(txt);

    if(tam <= 140){
        printf("TWEET\n");
    }else{
        printf("MUTE\n");
    }
    return 0;
}
