#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    if(a<=59){
        printf("0:0:%d\n",a);
    }
    else if(a>=59&&a<=3599){
        b=a/60;
        c=a-(b*60);
        printf("0:%d:%d\n",b,c);
    }
    else if(a>=3600){
        b=a/60;
        c=a-(b*60);
        d=b/60;
        e=b-(d*60);
        printf("%d:%d:%d\n",d,e,c);

    }

    return 0;
}


