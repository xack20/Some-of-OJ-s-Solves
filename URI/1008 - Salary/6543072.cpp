#include <stdio.h>
int main()
{
    int NUMBER,b;
    double c,SALARY;
    scanf("%d %d %lf",&NUMBER,&b,&c);
    SALARY = b*c;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",NUMBER,SALARY);


    return 0;
}
