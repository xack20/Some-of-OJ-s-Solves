#include <stdio.h>
int main ()
{

    int a,b;
    float c,d;
    scanf("%d %d %f",&a,&b,&c);
    d=b*c;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",a,d);
    return 0;
}