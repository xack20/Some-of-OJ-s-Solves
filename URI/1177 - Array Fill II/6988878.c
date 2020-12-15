#include<stdio.h>
int main()
{
    int n,a[1000];
    int i,j;
    scanf("%d",&n);
    for(i=0,j=0;i<1000;){


            a[i]=j;
            printf("N[%d] = %d\n",i,a[i]);
            i++;
            j++;
            if(j>=n){
                j=0;
            }


    }




return 0;
}
