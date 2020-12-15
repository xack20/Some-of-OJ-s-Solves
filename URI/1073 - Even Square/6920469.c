#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        if(b%2==0){
            printf("%d^2 = %d\n",b,b*b);
        }
    }
    return 0;
}
