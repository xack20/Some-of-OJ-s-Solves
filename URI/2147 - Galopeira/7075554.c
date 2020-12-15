#include <stdio.h>
#include <string.h>
int main()
{
    int c,i;
    double length;
    char type[10002];
    scanf("%d\n",&c);
    for(i=0;i<c;i++){
        gets(type);
        length=strlen(type);
        length=length/100;
        printf("%.2lf\n",length);
    }
    return 0 ;

}
