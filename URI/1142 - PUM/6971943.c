#include<stdio.h>
int main()
{
				int a,i=1,j;
				scanf("%d",&a);
				for(;i<=a+(a*3);){
								for(j=1;j<=3;j++){
												i++;
												printf("%d ",i-1);
								}
								printf("PUM\n");
								i=i+1;
				}
				return 0;
}