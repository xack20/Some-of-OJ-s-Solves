#include <stdio.h>
int main()
{
    double A,B,C,D,E,F,G,H,pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    D = (1.0/2)*A*C; 
    F = ((A+B)/2)*C;
    E = pi*C*C;
    G = B*B;
    H = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",D,E,F,G,H);
    


    return 0;
}

