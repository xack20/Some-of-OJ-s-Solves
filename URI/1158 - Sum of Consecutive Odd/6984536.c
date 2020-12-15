#include<stdio.h>
int main()
{
    int n,p,i,j,k,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&p,&j);
        if(p%2!=0){

            for(k=1;k<=j+(j-1);k++){
                    if(p%2!=0){
                s=s+p;

                    }
                    p++;
            }
        }
        else if(p%2==0){

            for(k=1;k<=j*2;k++){
                    if(p%2!=0){
                s=s+p;

                    }
                    p++;
            }
        }

            printf("%d\n",s);
            s=0;
    }

    return 0;
}
