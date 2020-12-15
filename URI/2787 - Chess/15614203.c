#include<stdio.h>
#include<math.h>
int main()
 
{
    int n , m ; scanf("%d %d",&n,&m);
    printf("%d\n", (n+m)&1 ? 0 : 1 );
    
    return 0;
}