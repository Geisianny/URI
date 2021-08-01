#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cv,ce,cs,fv,fe,fs,pc,pf;

    scanf("%d%d%d%d%d%d",&cv,&ce,&cs,&fv,&fe,&fs);

    pc = (cv*3) + ce;
    pf = (fv*3) + fe;

    if(pc>pf){
        printf("C\n");
    }else if(pc<pf){
        printf("F\n");
    }else{
        if(cs == fs){
            printf("=\n");
        }else if(cs > fs){
            printf("C\n");
        }else{
            printf("F\n");
        }
    }

    return 0;
}
