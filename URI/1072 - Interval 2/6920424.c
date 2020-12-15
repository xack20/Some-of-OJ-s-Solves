#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,i;
    scanf("%d",&i);
    for(a=1;a<=i;a++){
        scanf("%d",&b);
        if(b>=10 && b<=20){
            c++;
        }
        if(b<10 || b>20){
            d++;
        }
    }
    printf("%d in\n",c);
    printf("%d out\n",d);

    return 0;
}
