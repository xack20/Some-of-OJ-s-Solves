#include<stdio.h>
int main()
{
    int a,s=0,c=0;
    double avrg=0;
    start:
    scanf("%d",&a);
    if(a>=0){
        s=s+a;
        c++;

    avrg=s/(c*1.0);
    goto start;
    }


    printf("%.2lf\n",avrg);
    return 0;
}
