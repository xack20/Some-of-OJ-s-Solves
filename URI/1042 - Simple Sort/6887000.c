#include<stdio.h>
int main()
{
    int a[3],b[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if(a[0]>a[1] && a[0]>a[2]){
        b[2]=a[0];
        if(a[1]>a[2]){
            b[1]=a[1];
            b[0]=a[2];
        }
        else{
            b[1]=a[2];
            b[0]=a[1];
        }

    }
    else if(a[1]>a[0] && a[1]>a[2]){
        b[2]=a[1];
        if(a[0]>a[2]){
            b[1]=a[0];
            b[0]=a[2];
        }
        else{
            b[1]=a[2];
            b[0]=a[0];
        }

    }
    else if(a[2]>a[0] && a[2]>a[1]){
        b[2]=a[2];
        if(a[0]>a[1]){
            b[1]=a[0];
            b[0]=a[1];
        }
        else{
            b[1]=a[1];
            b[0]=a[0];
        }
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b[0],b[1],b[2],a[0],a[1],a[2]);
    return 0;
}
