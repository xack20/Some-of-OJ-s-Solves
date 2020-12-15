#include<stdio.h>
int main()
{
    int n,p,i,j,s=0,m,k;
    scanf("%d",&k);
    for(m=1;m<=k;m++){
    scanf("%d",&n);
    j=n;
    for(i=1;i<=j;i++){
        if(n%i==0){
    s=s+i;
        }
    }
    if((s-(i-1))==n){
            printf("%d eh perfeito\n",n);

        }
        else{
            printf("%d nao eh perfeito\n",n);
        }
        s=0;
}
    return 0;
}
