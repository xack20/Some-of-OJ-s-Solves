#include<stdio.h>
int main()
{
    int a,b,i,d,s=0;
    scanf("%d %d",&a,&b);


    if(a>b){
        d=a-b;
        for(i=1;i<d;i++){
            b++;
            if(b%2!=0){
            s=s+b;
            }
        }
    }
    else if(b>a){
        d=b-a;
        for(i=1;i<d;i++){
            a++;
            if(a%2!=0){
            s=s+a;
            }
        }
    }
    else if(a==b){
        s=0;
    }

    printf("%d\n",s);




    return 0;
}

