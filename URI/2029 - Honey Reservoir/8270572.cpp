#include<bits/stdc++.h>
using namespace std;
int main()
{
    double volume,diameter,height,area;
    int i;
    double pi =3.14;
    while(scanf("%lf %lf",&volume,&diameter)!=EOF)
    {
        printf("ALTURA = %.2lf\n",volume / (pi*(diameter/2)*(diameter/2)));
        printf("AREA = %.2lf\n",pi*(diameter/2)*(diameter/2));
    }
    return 0;
}


