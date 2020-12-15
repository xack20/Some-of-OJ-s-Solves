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
    for(f=1;f<e;f++){
            c++;

        if(c%5==2 || c%5==3){
            printf("%d\n",c);
        }

    }


    return 0;
}
