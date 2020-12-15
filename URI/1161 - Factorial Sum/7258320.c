#include<stdio.h>
int main()
{
    long long int i,s1,s2,s,a,b,j;
    while(scanf("%lld %lld",&a,&b)!=EOF){
         s1=1;
         s2=1;
         s=0;
        for(i=a;i>=1;i--){
            s1=s1*i;
        }
    for(j=b;j>=1;j--){
        s2=s2*j;
    }
    s=s+(s1+s2);
    printf("%lld\n",s);
    }

    return 0;
}
