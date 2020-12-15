#include<stdio.h>
int main()
{
				int a,i,b,c;
				double d;
				scanf("%d",&c);
				for(i=1;i<=c;i++){
								scanf("%d %d",&a,&b);
								if(a==0&&b==0 || a!=0 && b==0){
												
												printf("divisao impossivel\n");
							
								}
								else{
												
											d=a/(b*1.0);
												printf("%.1lf\n",d);
								}
				}
				
				return 0;
				
}