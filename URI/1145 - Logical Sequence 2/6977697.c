#include<stdio.h>
int main()
{
				int a,i=1,b,j;
				double c;
				scanf("%d",&b);
				scanf("%d",&a);

				for(;i<=a;){

								for(j=1;j<=b;j++){
												i++;
												if(b%2==1){
												if(i>a+1){
                                                    break;
												}

												if(j<b){
                                                    printf("%d ",i-1);
												}
												else{
                                                    printf("%d\n",i-1);
												}
												}
												if(b%2==0){
												if(i>a+1){
                                                    break;
												}

												if(j<b){
                                                    printf("%d ",i-1);
												}
												else{
                                                    printf("%d\n",i-1);
												}
												}


								}



				}
				return 0;
}
