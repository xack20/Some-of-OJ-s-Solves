#include<stdio.h>
int main()
{
				int a,b,c,d,e=0,f,i;
				scanf("%d",&a);
				for (f=1;f<=a;f++){
								scanf("%d %d",&b,&c);
								if(b>c){
												d=b-c;
												for(i=1;i<d;i++){
																c++;
																if(c%2!=0){
																	e=e+c;
																					
																}
												}
												}
								else if(c>b){
												d=c-b;
												for(i=1;i<d;i++){
																b++;
																if(b%2!=0){
																	e=e+b;
																				
																}
												}
												;
								
												
								}
								printf("%d\n",e)	;
								e=0;
				}
				return 0;
	}
								
								    