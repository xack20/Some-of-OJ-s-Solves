#include<stdio.h>
int main()
{
    int aa[7]={100,50,20,10,5,2,1},a,b,e,f,h,j,ab[5]={50,25,10,5,1}; 
    double d,ac[5]={0.50,0.25,0.10,0.05,0.01};
    scanf("%lf",&d);
    a = (int)d;
    b = (d-a)*100;
    printf("NOTAS:\n");
    for(e=0;e<=5;e++){
         f=a/aa[e];
         printf("%d nota(s) de R$ %d.00\n",f,aa[e]);
         a=a%aa[e];
        
}
     printf("MOEDAS:\n");
     printf("%d moeda(s) de R$ %d.00\n",a/aa[6],aa[6]);
     for(e=0;e<=4;e++){
         j=b/ab[e];
         printf("%d moeda(s) de R$ %.2lf\n",j,ac[e]);
         b=b%ab[e];
}
return 0;    
}