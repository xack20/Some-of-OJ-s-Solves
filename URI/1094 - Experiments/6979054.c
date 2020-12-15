#include<stdio.h>
int main()
{
				int a,e=0,f=0,g=0,s,p,i;
				double b,c,d;
				char A,S='%';
				scanf("%d",&p);
				for(i=1;i<=p*2;i++){
				scanf("%d",&a);
				A = getchar();
				if(A=='C'){

                    e=e+a;
				}
				if(A=='R'){

                    f=f+a;
				}
				if(A=='S'){

                    g=g+a;
				}
            }
				s=e+f+g;
				b=(e/(s*1.0))*100;
				c=(f/(s*1.0))*100;
				d=(g/(s*1.0))*100;
				printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %c\nPercentual de ratos: %.2lf %c\nPercentual de sapos: %.2lf %c\n",s,e,f,g,b,S,c,S,d,S);

				return 0;

}