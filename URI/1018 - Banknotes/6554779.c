#include <stdio.h>
int main()
{
    int a,b,e;
    int c,f;
    
    int aa[7]={100,50,20,10,5,2,1};
    scanf("%d",&a);
    printf("%d\n",a);
    for (b=0;b<=6;b++){
        f = aa[b];
        c=a/f;
        printf("%d nota(s) de R$ %d,00\n",c,aa[b]);
        e = c*aa[b];
        a = a-e;
    }
    return 0;
}

