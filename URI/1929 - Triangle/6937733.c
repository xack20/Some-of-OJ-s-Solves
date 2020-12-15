#include<stdio.h>
int main()
{
    int a,b,c,d,j=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a+b>c&&a+c>b&&b+c>a ){
        j=1;
    }
    if(b+c>d&& b+d>c && c+d>b){
        j=1;
    }
    if(a+c>d && a+d>c && c+d>a){
        j=1;
    }
    if(a+b>d&& a+d>b && b+d>a){
        j=1;
    }
    if(j==1){
        printf("S\n");

    }
    if(j==0){
        printf("N\n");
    }




    return 0;
}



