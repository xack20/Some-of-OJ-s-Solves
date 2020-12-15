#include<stdio.h>
int main()
{
    double a,b,c,d,e,x,y;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    x= (2*a+3*b+4*c+d)/10;
    printf("Media: %.1lf\n",x);
    if(x>=7){
        printf("Aluno aprovado.\n");
        }
    else if(x<5){
        printf("Aluno reprovado.\n");
        }
    else if(x>=5&&x<7){
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        y=(x+e)/2;
        printf("Nota do exame: %.1lf\n",e);
        if(y>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",y);
            }
      else if(y<5){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",y);
            }
    }
    return 0;
}