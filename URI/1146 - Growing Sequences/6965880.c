#include<stdio.h>
int main()
{
    int a,i,b,p,j,c,z;
    for(z=0;z>=0;z++){

    scanf("%d",&a);
    if(a==0){
        break;
    }
    else{
    int aa[a],ab[a];
    c=a;
    b=a;
    i=0;

    while(i<=c-1){
            i++;
            a--;
            aa[i]=a+1;


    }
    for(p=0;p<=c-1;p++){
                    b--;
        ab[p]=aa[b+1];

    }
            for(j=0;j<=c-2;j++){
    printf("%d ",ab[j]);
            }
            printf("%d\n",ab[j]);

    }
    }
    return 0;
}
