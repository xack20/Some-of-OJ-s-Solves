#include<stdio.h>
int main()
{
    int a;
    int a0[]={61,71,11,21,32,19,27,31};
    scanf("%d",&a);
    if(a==a0[0]){
        printf("Brasilia\n");
    }
    else if(a==a0[1]){
        printf("Salvador\n");
    }
    else if(a==a0[2]){
        printf("Sao Paulo\n");
    }
    else if(a==a0[3]){
        printf("Rio de Janeiro\n");

    }
    else if(a==a0[4]){
        printf("Juiz de Fora\n");

    }
    else if(a==a0[5]){
        printf("Campinas\n");
    }
    else if(a==a0[6]){
        printf("Vitoria\n");
    }
    else if(a==a0[7]){
        printf("Belo Horizonte\n");

    }
    else {
            printf("DDD nao cadastrado\n");

    }
    return 0;
}
