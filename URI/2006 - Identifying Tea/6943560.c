#include<stdio.h>
int main()
{
				int a,i,b,c=0;
				scanf("%d",&b);
				for(i=1;i<=5;i++){
								scanf("%d",&a);
								if(a==b){
												c++;
								}
				}
				printf("%d\n",c);
				return 0;
}