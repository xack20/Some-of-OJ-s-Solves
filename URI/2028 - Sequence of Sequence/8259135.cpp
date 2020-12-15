#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n=1,c=1;
    while(scanf("%d",&t)!=EOF)
    {
        c=1;
        if(t==0){
                printf("Caso %d: %d numero\n",n++,c);
        cout << "0" << endl << endl;
        }
        else
        {
            for(i=1; i<=t; i++)for(j=1; j<=i; j++)c++;
            printf("Caso %d: %d numeros\n",n++,c);
            cout << "0" << " ";
            for(i=1; i<=t; i++)for(j=1; j<=i; j++){
                    if(j==t)break;
                    cout << i << " ";
            }
            cout << t << endl << endl;
        }
    }
    return 0;
}

