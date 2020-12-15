#include<stdio.h>
int main()
{
    int a,i,j;
    double b,c,d,e,f;
    scanf("%d",&a);
    j=a;
    double ab[j+1];
    for(i=1;i<=a;i++){
        scanf("%lf %lf %lf",&b,&c,&d);
        e=b*2+c*3+d*5;
        f=e/10;
        ab[i]=f;
    }
    for(i=1;i<=a;i++){
        printf("%.1lf\n",ab[i]);
    }
    return 0;
}
