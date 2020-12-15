#include<stdio.h>
int main()
{
				int i,n;
				char str[12][15]={"January","February","March","April","May","June","July","August","September","October","November","December"};
				scanf("%d",&n);
				i=n-1;
				printf("%s\n",str[i]);
				return 0;
}