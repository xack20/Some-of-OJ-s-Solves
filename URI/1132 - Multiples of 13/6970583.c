#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,h=0;

    scanf("%d %d",&a,&b);
    if(b>a){
        c=a;
        d=b;
    }
    else if(a>b){
        c=b;
        d=a;
    }
    e=(d-c);
    if(e<0){
        e=e*-1;
    }
    for(f=1;f<=e+1;f++){

        if(d%13!=0){
            h=h+d;
        }
        d--;
    }

    printf("%d\n",h);
    return 0;
}
