#include<stdio.h>
int main()
{
				int a,i=1,b,c;
				scanf("%d",&a);
				for(;i<=a;){

								printf("%d ",i);
								b=i*i;
								printf("%d ",b);
								c=i*i*i;
								printf("%d\n",c);
								printf("%d %d %d\n",i,b+1,c+1);
								i++;

				}
				return 0;
}
