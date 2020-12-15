#include <stdio.h>
int main()
{
    int a,y,c,m,d;
    scanf("%d",&a);
    y=a/365;
    c=a%365;
    m=c/30;
    d=c%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}



