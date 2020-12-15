#include<stdio.h>
int main()
{
    double n,a[100];
    int i;
    scanf("%lf",&n);
    for(i=0;i<100;){


            a[i]=n;
            printf("N[%d] = %.4lf\n",i,a[i]);
            i++;
            n=n/2;


    }




return 0;
}
