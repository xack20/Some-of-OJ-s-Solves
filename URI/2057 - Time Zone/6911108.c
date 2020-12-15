#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        a=a+24;
        d=(a+b)+c;
        if(d>24){
            d=d-24;
        }
    }
    else if(a==b){
        d=24+c;
    }
    else if(a>b){
        d=(a+b);
        if(d>24){
            d=d-24;
            d=d+c;
        }
        else{
            d=d+c;
        }
    }
    if(d==24){
        printf("0\n");
    }
    else{
        printf("%d\n",d);
    }
    return 0;
}
