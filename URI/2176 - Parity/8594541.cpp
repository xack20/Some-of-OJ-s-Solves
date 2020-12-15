#include<bits/stdc++.h>
using namespace std;
int main()
{
   // while(1)
    //{
    char A[1000];
    scanf("%s",A);
    int i,c=0;
    for(i=0;A[i]!='\0';i++)if(A[i]=='1')c++;

    if(c%2==0)A[i]='0';
    else  A[i]='1';

    A[i+1]='\0';
    printf("%s\n",A);
    //}
    return 0;
}
