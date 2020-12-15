#include <stdio.h>
int main()
{
    int a,b;
    double c,d = (1.0/12);
    scanf("%d %d",&a,&b);
    c = a*b*d;
    printf("%.3lf\n",c);
    return 0;
}
