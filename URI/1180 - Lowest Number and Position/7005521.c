#include<stdio.h>
int main()
{
    int n,a,i,j,k,e=0;
    int A[1000],B[1000];

    scanf("%d",&a);
    for(j=0;j<a;j++){
        scanf("%d",&n);
        A[j]=n;
        B[j]=n;
    }

    for(i=0;i<a;i++){
        if(B[i]<B[i+1]){
            B[i+1]=B[i];
        }
    }
    printf("Menor valor: %d\n",B[a-1]);
    for(k=0;k<a;k++){
        if(B[a-1]==A[k]){
            break;
        }
        else {
            e++;
        }
    }
    printf("Posicao: %d\n",e);

    return 0;
}
