#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,e=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a%2==0){
            b++;
        }
        if(a%3==0){
            c++;
        }
        if(a%4==0){
            d++;
        }
        if(a%5==0){
            e++;
        }
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",b,c,d,e);
    return 0;
}
