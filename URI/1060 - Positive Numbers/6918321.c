#include<stdio.h>
int main()
{
    double a[6];
    int b=0,i;
    for(i=0;i<6;i++){
        scanf("%lf",&a[i]);
        if(a[i]>0){
            b++;
        }
    }
    printf("%d valores positivos\n",b);
    return 0;
}
