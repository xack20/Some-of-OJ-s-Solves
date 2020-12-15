#include<stdio.h>
int main()
{
    int a[10];
    int n,i;
    for(i=0;i<10;i++){
        scanf("%d",&n);
        if(n<=0){
        a[i]=1;
        }
        else{
            a[i]=n;
        }
    }
    for(i=0;i<10;i++){
        printf("X[%d] = %d\n",i,a[i]);
    }
    return 0;
}
