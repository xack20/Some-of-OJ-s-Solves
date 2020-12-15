#include <stdio.h>
int main()
{
    int a,b=0,c=0,d=0;
    start:
    scanf("%d",&a);

    if(a==1){
            b++;
        goto start;
    }
    if(a==2){
        c++;
        goto start;

    }
    if(a==3){
        d++;
        goto start;

    }
    if(a==4){
            goto end;

    }
    else{
        goto start;
    }
    end:
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",b,c,d);
    return 0;
}
