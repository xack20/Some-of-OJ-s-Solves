#include<stdio.h>
int main()
{
    double A,B,C,Tri,Sq,Crl,Tpzm,Rec,pi = 3.14159;

    scanf("%lf%lf%lf",&A,&B,&C);

    Tri = (A * C) / 2;
    Crl = pi * C * C;
    Tpzm = ((A+B)/2)*C;
    Sq = B * B;
    Rec = A * B;

    printf("TRIANGULO: %0.3lf\n",Tri);

    printf("CIRCULO: %0.3lf\n",Crl);

    printf("TRAPEZIO: %0.3lf\n",Tpzm);

    printf("QUADRADO: %0.3lf\n",Sq);

    printf("RETANGULO: %0.3lf\n",Rec);

    return 0;
}