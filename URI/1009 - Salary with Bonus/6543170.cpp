#include <stdio.h>
int main()
{
    char name[20];
    double A,B,C,TOTAL;
    gets(name);
    scanf("%lf %lf",&A,&B);

    C = (B*15)/100;
    TOTAL = (A + C);

    printf("TOTAL = R$ %.2lf\n",TOTAL);


    return 0;
}

