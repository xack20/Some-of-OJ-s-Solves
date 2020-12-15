#include<stdio.h>
int main()
{
    double a,b,c;
    int d;
    char e='%';
    scanf("%lf",&a);
    if(a<=400 && a>0){
        b=a*0.15;
        c=b+a;
        d =15;
    }
    else if(a>400 && a<=800){
        b=a*0.12;
        c=b+a;
        d =12;
    }
    else if(a>800 && a<=1200){
        b=a*0.10;
        c=b+a;
        d =10;
    }
    else if(a>1200 && a<=2000){
        b=a*0.07;
        c=b+a;
        d =7;
    }
    else if(a>2000){
        b=a*0.04;
        c=b+a;
        d =4;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n",c,b,d,e);
    return 0;
}
