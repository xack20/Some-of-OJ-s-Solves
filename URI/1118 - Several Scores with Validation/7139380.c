#include<stdio.h>
int main()
{

    double a,b,c=0.0,av;
    int i,d;
    start:
        c=0.0;
    for(i=0;i>=0;i++){
            if(c==0){
                scanf("%lf",&a);
                if(a<0 || a>10 ){
                    printf("nota invalida\n");
                }
                else{
                    c=1;
                }
            }
            if(c==1){
                scanf("%lf",&b);
                if(b<0 || b>10 ){
                    printf("nota invalida\n");
                }
                else{
                    av=(a+b)/2;
                    printf("media = %.2lf\n",av);
                    break;
                }
            }
    }
    mid:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&d);
    if(d==1){
        goto start;
    }
    else if(d==2){
        goto end;
    }
    else{
        goto mid;
    }
    end:
    return 0;
}
