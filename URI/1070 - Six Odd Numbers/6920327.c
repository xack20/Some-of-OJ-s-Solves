#include<stdio.h>
int main()
{
    int a,i,j=0;
    scanf("%d",&a);
    for(i=a;i>0;i++){
        if(i%2!=0){
            j++;
            printf("%d\n",i);
    if(j==6){
        break;
    }

        }
    }
    return 0;
}
