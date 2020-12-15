#include<stdio.h>
int main()
{
    int a,b;
    while(1){
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)break;
    if(abs(a-b)==7 || abs(a-b)==12 || abs(a-b)==22 || abs(a-b)==52 || abs(a-b)==102 || abs(a-b)==15  || abs(a-b)==25  || abs(a-b)==55  || abs(a-b)==105  || abs(a-b)==30  || abs(a-b)==60  || abs(a-b)== 110  || abs(a-b)==70  || abs(a-b)==120  || abs(a-b)==150)printf("possible\n");
    else printf("impossible\n");
    }
    return 0;
}

