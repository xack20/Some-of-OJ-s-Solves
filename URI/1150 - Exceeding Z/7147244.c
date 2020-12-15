#include<stdio.h>
int main()
{
    int a,b,i,c=0,n=0,p;
    scanf("%d",&a);
    for(i=0;i>=0;i++){
        scanf("%d",&b);
        if(b>a){
            for(p=a;p>=0;p++){
                c=c+p;
                n++;
                if(c>b){
                        printf("%d\n",n);
                    break;
                }
            }
            break;
        }
    }
    return 0;
}
