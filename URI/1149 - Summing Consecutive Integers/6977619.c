#include<stdio.h>
int main()
{
				int a,i=1,b,c=0;
				scanf("%d",&b);
				again:
				scanf("%d",&a);
				if(a<=0){
                    goto again;
				}
				for(;i<=a;){
								i++;
								b++;
								c=c+(b-1);
				}
				printf("%d\n",c);
				return 0;
}
