#include<stdio.h>
int main()
{
    int p,i,k,s=0;
        start:
        scanf("%d",&p);
        if(p==0){
            goto end;
        }
        if(p%2!=0){

            for(k=1;k<=5+(5+1);k++){
                    if(p%2==0){
                s=s+p;

                    }
                    p++;
            }
        }
        else if(p%2==0){

            for(k=1;k<=5*2;k++){
                    if(p%2==0){
                s=s+p;

                    }
                    p++;
            }
        }

            printf("%d\n",s);
            s=0;
            goto start;
    end:
    return 0;
}
