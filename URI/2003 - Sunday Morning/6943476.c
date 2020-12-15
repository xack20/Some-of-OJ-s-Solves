#include<stdio.h>
int main()
{
				int j,k,l;
				char c;
				while(scanf("%d%c%d",&k,&c,&l)!= EOF){
								if(k>=7){
												if(k==7){
																printf("Atraso maximo: %d\n",l);
												}
												else if(k==8){
																j=l+60;
																printf("Atraso maximo: %d\n",j);
												}
												else if(k==9){
																j=l+120;
																printf("Atraso maximo: %d\n",j);
												}
								}
								else if(k<7){
												l=0;
												printf("Atraso maximo: %d\n",l);
								}
				}
				
				return 0;
				
}