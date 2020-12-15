#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&b);
    for(i=1;i<=b;i++){
    scanf("%d",&a);
    if(a%2==0){
        printf("0\n");
    }
    else if(a%2==1){
        printf("1\n");
    }
    }




    return 0;
}



