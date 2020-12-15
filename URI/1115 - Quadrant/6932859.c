#include<stdio.h>
int main()
{
				int a,i,b;
				for(i=0;i>=0;i++){
								scanf("%d %d",&a,&b);
								if(a==0&&b==0 || a==0&&b!=0 || a!=0 && b==0){
											break;
												
								}
								else if(a>0&&b>0){
												printf("primeiro\n");
								}
								else if(a>0&&b<0){
												printf("quarto\n");
								}
								else if(a<0&&b<0){
												printf("terceiro\n");
								}
								else if(a<0&&b>0){
												printf("segundo\n");
								}
				}
				return 0;
				
}