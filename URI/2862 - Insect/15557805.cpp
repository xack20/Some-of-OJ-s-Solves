#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i ;
    scanf("%d",&n);
    //printf("%d",n);
    for(i=0; i<n; i++){
        int k ; scanf("%d",&k);
        if(k > 8000)
            printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");
    }
    return 0;
}
