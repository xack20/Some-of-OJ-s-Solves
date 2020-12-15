#include <stdio.h>
int main()
{
    int a,b,j;
    for(j=0;j>=0;j++){
        scanf("%d %d",&a,&b);
        if(a>b){
           printf("Decrescente\n");
        }
        else if(a<b){
        printf("Crescente\n");
        }
        else if(a==b){
        break;
        }
    }
    return 0;
}