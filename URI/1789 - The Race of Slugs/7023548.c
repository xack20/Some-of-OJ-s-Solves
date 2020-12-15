#include<stdio.h>
int main()
{
    int n,b,i,a,j;

    int A[1000];

    for(i=0;scanf("%d",&n)!= EOF;i++){
                for(j=0;j<n;j++){
                    scanf("%d",&a);
                    A[j]=a;
                }
                for(j=0;j<n;j++){
                    if(A[j]>A[j+1]){
                        A[j+1]=A[j];
                    }
        }
        if(A[n-1]>=20){
            printf("3\n");
        }
        else if(A[n-1]>=10 && A[n-1]<20){
            printf("2\n");
        }
        else if(A[n-1]<10){
            printf("1\n");
        }
    }


    return 0;
}

