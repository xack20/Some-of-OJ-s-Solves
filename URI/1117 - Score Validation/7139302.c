#include<stdio.h>
int main()
{
    double a,b,c=0.0;
    int i;
    for(i=0;i>=0;i++){
            if(c==0){
                scanf("%lf",&a);
                if(a<0 || a>10 ){
                    printf("nota invalida\n");
                }
                else{
                    c=1;
                }
            }
            if(c==1){
                scanf("%lf",&b);
                if(b<0 || b>10 ){
                    printf("nota invalida\n");
                }
                else{
                    c=(a+b)/2;
                    printf("media = %.2lf\n",c);
                    break;
                }
            }
    }
    return 0;
}
