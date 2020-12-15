#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[10000],B[10000];
    int n,i,j;
    cin >> n;
    while(n--)
    {
        int f=0;
        scanf("%s %s",A,B);
        for(i=strlen(B)-1,j=strlen(A)-1;i>=0;i--,j--)
        {
            if(A[j]!=B[i])break;
            f++;
        }
        if(f==strlen(B))cout << "encaixa\n";
        else cout << "nao encaixa" <<endl;
    }
    return 0;
}
