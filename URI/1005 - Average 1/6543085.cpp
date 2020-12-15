#include <stdio.h>
int main()
{
    double A,B,MEDIA,C=3.5,D=7.5,E=(C+D);
    scanf("%lf %lf",&A,&B);
    A = A * C;
    B = B * D;
    MEDIA = (A + B)/E;

    printf("MEDIA = %.5lf\n",MEDIA);


    return 0;
}

