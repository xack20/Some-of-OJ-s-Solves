#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,i;
    scanf("%d",&d);
    if(d==1){
        printf("0\n");
}
    else if(d==2){
        printf("0 1\n");
}
    else if(d>2){ 
        d=d-2;
        printf("0 1 ");
        for(i=1;i<=d-1;i++){
            if(d==1){
                break;
}
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
}
          
        c=a+b;
        printf("%d\n",c);
}
    return 0;
}