#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,e=0,f=0,i,p;
    for(i=0;i>=0;i++){
            if (i>0){
                goto stay;
            }
            else{
                goto mid;
            }
            stay:
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&p);
            if(p==2){
                break;
            }
           mid:
        scanf("%d %d",&a,&b);
        c=c+1;
        if(a>b){
            d=d+1;
        }
        if(a<b){
            e=e+1;
        }
        if(a==b){
            f=f+1;
        }

    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",c,d,e,f);
    if(d>e){
        printf("Inter venceu mais\n");
    }
    else if(d<e){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Não houve vencedor\n");
    }
    return 0;
}
