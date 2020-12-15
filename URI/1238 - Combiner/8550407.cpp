#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char A[10000],B[5000],C[50000];
    cin >> t;
    while(t--)
    {
        int i=0,k=0,j=0;
        scanf("%s %s",A,B);
        for(;;)
        {
            if(A[i] == '\0' && B[j] == '\0')break;
            if(A[i]!='\0')
            {
                C[k]=A[i];
                i++;
                k++;
            }
            if(B[j]!='\0')
            {
                C[k]=B[j];
                k++;
                j++;
            }

        }
        C[k]='\0';
        cout << C <<endl;

    }
    return 0;
}
