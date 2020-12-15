#include<stdio.h>
int main()
{
				int a,b,c,d,e,f,s=0;
				start:
				scanf("%d %d",&a,&b);
				if (a<=0 || b<=0){
								goto end;
				}
				else{
								if (a>b){
												c=a;
												d=b;
								}
								else if(b>a){
												c=b;
												d=a;
								}
								f=(c-d)+1;
								for(e=1;e<=f;e++){
												d++;
												printf("%d ",d-1);
												s=s+(d-1);
								}
								printf("Sum=%d\n",s);
								s=0;
				goto start;
								
								}
				
				end:
				return 0;
}