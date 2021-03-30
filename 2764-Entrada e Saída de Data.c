#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dd,mm,aa;

    scanf("%d%*c%d%*c%d",&dd,&mm,&aa);

    printf("%.2d/%.2d/%.2d\n",mm,dd,aa);
    printf("%.2d/%.2d/%.2d\n",aa,mm,dd);
    printf("%.2d-%.2d-%.2d\n",dd,mm,aa);

    return 0;
}
