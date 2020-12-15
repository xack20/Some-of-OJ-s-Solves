#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j,l,k,n;
    char str1[1001];
    char str[1001];
    scanf("%d\n",&a);
    for(i=0;i<a;i++){

        gets(str);
        l=strlen(str);
        str[l]='\0';
        for(j=0;j<l;j++){
                if(str[j]>=65 && str[j]<=90 || str[j]>=97 && str[j]<=122){
            str[j]=str[j]+3;
                }
        }
        str[l]='\0';
        for(j=0,k=l-1;str[j]!='\0';j++,k--){
            str1[j]=str[k];

        }
        str1[j]='\0';
            n=(l/2);
            for(j=n;str1[j]!='\0';j++){
                str1[j]=str1[j]-1;
            }
        printf("%s\n",str1);

    }
    return 0;
}
