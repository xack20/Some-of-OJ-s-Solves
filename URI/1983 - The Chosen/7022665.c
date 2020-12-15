#include<stdio.h>
int main()
{
    int n,i,e=0,a;

    int A[1000];
    double B[1000],C[1000];
    double b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&a);
            scanf("%lf",&b);
            A[i]=a;
            B[i]=b;
            C[i]=b;
    }
    for(i=0;i<n;i++){
        if(B[i]>B[i+1]){
            B[i+1]=B[i];
        }
    }
    for(i=0;i<n;i++){

        if(C[i]==B[n-1]){
            break;
        }
        e++;

    }
    if(B[n-1]<8){
        printf("Minimum note not reached\n");
    }
    else{

        printf("%d\n",A[e]);
    }

    return 0;
}
