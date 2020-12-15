#include<stdio.h>
int main()
{
    double a[6],j,sum=0;
    int b=0,i;
    for(i=0;i<6;i++){
        scanf("%lf",&a[i]);
        if(a[i]>0){
            b++;
            j = a[i];
            sum = sum+j;
        }
    }

    printf("%d valores positivos\n",b);
    printf("%.1lf\n",sum/b);
    return 0;
}
