#include <stdio.h>

int main()
{
    int num;

    scanf("%d",&num);

    if((num +1) % 2 == 0){
        printf("%d\n",num+1);
    }else if((num +2) % 2 == 0){
        printf("%d\n",num+2);
    }

    return 0;
}
