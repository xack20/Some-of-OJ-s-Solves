#include <stdio.h>
int main()
{
    double A,B,C,MEDIA,G=2,D=3,F=5,E=(G+D+F);
    scanf("%lf %lf %lf",&A,&B,&C);
    A = A * G;
    B = B * D;
    C = C * F;
    MEDIA = (A + B + C)/E;

    printf("MEDIA = %.1lf\n",MEDIA);


    return 0;
}

