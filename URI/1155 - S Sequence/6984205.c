#include<stdio.h>
int main()
{
    double s =0,n=0,i;
    for(i=1;i<=100;i++){
        n++;
        s=s+(1/(n*1.0));

    }
    printf("%.2lf\n",s);
    return 0;
}
