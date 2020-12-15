#include<stdio.h>
int main()
{
    int a,i,j=0;
    for(i=1;i<=5;i++){
        scanf("%d",&a);
        if(a%2==0){
            j++;
        }
    }
    printf("%d valores pares\n",j);
    return 0;
}
