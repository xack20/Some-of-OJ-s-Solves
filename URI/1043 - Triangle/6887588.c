#include <stdio.h>
int main()
{
    double a,b,c,P,A;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        P=a+b+c;
        printf("Perimetro = %.1lf\n",P);
    }
    else{
        A=0.5*c*(a+b);
        printf("Area = %.1lf\n",A);
    }
    return 0;
}
