#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[100000];
    char B[1000][1000];
    int i,j=-1,f=1,c=0;
    while(scanf("%s",A)!=EOF)
    {
        f=1;

        for(i=0; i<=j; i++)
        {
            if(strcmp(A,B[i])==0)
            {
                f=0;
                break;
            }
        }
            if(f!=0){
                    c++;
              j++;
                strcpy(B[j],A);
            }

    }
    //for(i=0;i<=j;i++)cout << B[i] << " " << endl;
    cout << c << endl;
    return 0;
}
