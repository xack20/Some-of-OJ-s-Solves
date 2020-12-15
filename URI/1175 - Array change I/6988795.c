#include<stdio.h>
int main()
{
    int n,a[20],b[20];
    int i,j=20;

    for(i=0;i<20;i++){
            scanf("%d",&n);
            b[i]=n;
            n=n*2;

    }
    for(i=0;i<=20;i++){
            j--;
        a[i]=b[j];

    }
    for(i=0;i<20;i++){

        printf("N[%d] = %d\n",i,a[i]);

    }
    return 0;
}
