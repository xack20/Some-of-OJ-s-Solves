#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f= (b+c)%2;
    if(a==f){
        if(d==e){
            printf("Jogador 2 ganha!\n");
        }
        else if(d!=e){
            printf("Jogador 1 ganha!\n");
        }
    }
    else if(a!=f){
        if(d==1 && e == 1){
            printf("Jogador 2 ganha!\n");
        }
        else{
            printf("Jogador 1 ganha!\n");
        }
    }
}
