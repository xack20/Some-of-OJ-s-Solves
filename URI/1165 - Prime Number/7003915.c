#include<stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==2 || a==1){
            printf("%d eh primo\n",a);
        }
        else{
        for(j=2;j<a;j++){
            if(a%j==0){
                printf("%d nao eh primo\n",a);
                break;
            }
            else if(j==a-1){
                        printf("%d eh primo\n",a);
                        break;
                }
            }
        }
    }
    return 0;
}
