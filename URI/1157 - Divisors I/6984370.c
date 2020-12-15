#include<stdio.h>
int main()
{
    int n,p,i,j;
    scanf("%d",&n);
    j=n;
    for(i=1;i<=j;i++){
        if(n%i==0){
    printf("%d\n",i);
        }
    }
    return 0;
}
