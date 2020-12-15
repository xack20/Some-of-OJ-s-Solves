#include<stdio.h>
int main()
{
    double s =0;
    int n=1,p=0,i;
    for(i=1;i<=41;i++){

        p++;
        if(p%2!=0){

        s=s+(p/(n*1.0));
        n=n*2;
        }
    }
    printf("%.2lf\n",s);
    return 0;
}
