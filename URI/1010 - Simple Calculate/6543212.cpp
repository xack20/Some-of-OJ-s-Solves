#include <stdio.h>
int main()
{
    double C,H,F,G,TOTAL;
    int A,B,D,E;
    scanf("%d %d %lf",&A,&B,&C);
    scanf("%d %d %lf",&D,&E,&F);
    G = B*C;
    H = E*F;
    TOTAL = G+H;
    printf("VALOR A PAGAR: R$ %.2lf\n",TOTAL);


    return 0;
}

